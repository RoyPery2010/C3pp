module c3ppc;
import std::io;
import std::io::file;
import std::core::dstring;

fn void main(String[] args) {
    if (args.len < 2) {
        io::printn("Usage: c3ppc <input_file.c3ipp, .c3pp, or .c3i>");
        return;
    }

    String input_file = args[1];

    char[]? file_data = file::load(tmem, input_file);
    if (catch file_data) {
        io::printfn("Error: Could not read file '%s'", input_file);
        return;
    }

    String src = (String)file_data;

    DString out = dstring::new(tmem);
    DString fields = dstring::new(tmem);
    DString methods = dstring::new(tmem);

    bool in_class = false;
    bool in_method = false;
    int brace_depth = 0;
    String current_class = "";
    String template_params = "";

    usz line_start = 0;
    for (usz i = 0; i <= src.len; i++) {
        if (i == src.len || src[i] == '\n') {
            if (line_start > i) line_start = i;

            String line = safe_slice(src, line_start, i);
            line_start = i + 1;

            if (line.len > 0 && line[line.len - 1] == '\r') {
                line = safe_slice(line, 0, line.len - 1);
            }

            String trimmed = str_trim(line);

            // 0. Handle #include conversion to import
            if (!in_class && str_starts_with(trimmed, "#include")) {
                if (find_char(trimmed, '<') != -1 && find_char(trimmed, '>') != -1) {
                    sz open_b = find_char(trimmed, '<');
                    sz close_b = find_char(trimmed, '>');
                    String header_name = str_trim(safe_slice(trimmed, (usz)open_b + 1, (usz)close_b));
                    
                    if (header_name == "iostream" || header_name == "stdio.h") {
                        out.append("import std::io;\n");
                    } else if (header_name == "vector") {
                        out.append("import std::collections::list;\n");
                    } else {
                        out.appendf("import %s;\n", header_name);
                    }
                    continue;
                }
            }

            // 0. Handle top-level standalone functions (like main) outside of classes
            if (!in_class && (str_starts_with(trimmed, "fn void main") || str_starts_with(trimmed, "fn int main") || str_starts_with(trimmed, "void main"))) {
                if (str_starts_with(trimmed, "void main") || str_starts_with(trimmed, "int main")) {
                    out.appendf("fn %s\n", line);
                } else {
                    out.appendf("%s\n", line);
                }
                continue;
            }

            // 0. Automatically intercept object instantiations outside classes and auto-inject .init()
            if (!in_class) {
                String trimmed_line = str_trim(line);
                // Check if it's a variable declaration like "Greeter g;"
                if (find_char(trimmed_line, ';') != -1 && find_char(trimmed_line, '=') == -1 && !str_starts_with(trimmed_line, "return") && !str_starts_with(trimmed_line, "import") && !str_starts_with(trimmed_line, "module")) {
                    sz space_idx = find_char(trimmed_line, ' ');
                    if (space_idx != -1) {
                        String potential_type = str_trim(safe_slice(trimmed_line, 0, (usz)space_idx));
                        
                        // If it's an uppercase type name (which user-defined classes are in C3), treat it as a class instance
                        if (potential_type.len > 0 && potential_type[0] >= 'A' && potential_type[0] <= 'Z') {
                            out.appendf("%s\n", line);
                            String rest_decl = str_trim(safe_slice(trimmed_line, (usz)space_idx, trimmed_line.len));
                            sz semi_idx = find_char(rest_decl, ';');
                            if (semi_idx != -1) {
                                String var_name = str_trim(safe_slice(rest_decl, 0, (usz)semi_idx));
                                sz paren_idx = find_char(var_name, '(');
                                if (paren_idx != -1) {
                                    var_name = str_trim(safe_slice(var_name, 0, (usz)paren_idx));
                                }
                                // Correctly generate: TypeName.init(&variableName);
                                out.appendf("    %s.init(&%s);\n", potential_type, var_name);
                                continue;
                            }
                        }
                    }
                }
            }

            // 0. Catch template declarations: template <typename T>
            if (!in_class && str_starts_with(trimmed, "template")) {
                sz angle_open = find_char(trimmed, '<');
                sz angle_close = find_char(trimmed, '>');
                if (angle_open != -1 && angle_close != -1 && angle_close > angle_open) {
                    template_params = str_trim(safe_slice(trimmed, (usz)angle_open + 1, (usz)angle_close));
                }
                continue;
            }

            // 1. Namespace or Class definition start
            if (!in_class && str_starts_with(trimmed, "namespace ") && str_ends_with(trimmed, "{")) {
                String ns_name = str_trim(safe_slice(trimmed, 9, trimmed.len - 1));
                out.appendf("module %s;\n\n", ns_name);
                continue;
            }

            if (!in_class && str_starts_with(trimmed, "class ") && str_ends_with(trimmed, "{")) {
                in_class = true;
                fields.clear();
                methods.clear();

                String header = "";
                if (trimmed.len >= 7) {
                    header = str_trim(safe_slice(trimmed, 6, trimmed.len - 1));
                }

                String parent = "";
                sz colon_idx = find_char(header, ':');
                if (colon_idx != -1) {
                    usz c_idx = (usz)colon_idx;
                    current_class = str_trim(safe_slice(header, 0, c_idx));
                    if (c_idx + 1 <= header.len) {
                        parent = str_trim(safe_slice(header, c_idx + 1, header.len));
                    }
                } else {
                    current_class = header;
                }

                if (parent.len > 0) {
                    fields.appendf("    inline %s base;\n", parent);
                }
                continue;
            }

            if (in_class) {
                if (!in_method && trimmed == "public:") {
                    fields.append("    // public:\n");
                    continue;
                }
                if (!in_method && trimmed == "private:") {
                    fields.append("    @private\n");
                    continue;
                }

                // 2. Class definition end
                if (!in_method && trimmed == "}") {
                    if (template_params.len > 0) {
                        out.appendf("struct %s($%s) {\n", current_class, template_params);
                        template_params = ""; 
                    } else {
                        out.appendf("struct %s {\n", current_class);
                    }
                    
                    if (fields.len() == 0) {
                        out.append("    char _dummy;\n");
                    } else {
                        out.append(fields.str_view());
                    }
                    out.append("}\n\n");

                    out.append(methods.str_view());

                    in_class = false;
                    current_class = "";
                    continue;
                }

                // 3. Destructor transformation
                if (!in_method && str_starts_with(trimmed, "~") && str_ends_with(trimmed, "{")) {
                    in_method = true;
                    brace_depth = 1;
                    methods.appendf("fn void %s.finalize(%s* self) {\n", current_class, current_class);
                    continue;
                }

                // 4. Constructor transformation
                if (!in_method && str_starts_with(trimmed, current_class) && find_char(trimmed, '(') != -1) {
                    in_method = true;
                    brace_depth = 1;

                    sz open_paren = find_char(trimmed, '(');
                    String rest = safe_slice(trimmed, (usz)open_paren, trimmed.len);

                    if (str_starts_with(rest, "()")) {
                        methods.appendf("fn void %s.init(%s* self) {\n", current_class, current_class);
                    } else {
                        String params = safe_slice(rest, 1, rest.len);
                        methods.appendf("fn void %s.init(%s* self, %s\n", current_class, current_class, params);
                    }
                    continue;
                }

                // 5. Method signature transformation
                if (!in_method && (str_starts_with(trimmed, "fn ") || (find_char(trimmed, '(') != -1 && str_ends_with(trimmed, "{")))) {
                    in_method = true;
                    brace_depth = 1;

                    String method_def = trimmed;
                    if (str_starts_with(method_def, "fn ")) {
                        method_def = safe_slice(method_def, 3, method_def.len);
                    }

                    sz open_paren = find_char(method_def, '(');
                    if (open_paren != -1) {
                        usz p_idx = (usz)open_paren;
                        String header = str_trim(safe_slice(method_def, 0, p_idx));
                        String rest = safe_slice(method_def, p_idx, method_def.len);

                        sz space_idx = find_char(header, ' ');
                        if (space_idx != -1) {
                            usz s_idx = (usz)space_idx;
                            String ret_type = safe_slice(header, 0, s_idx);
                            String method_name = str_trim(safe_slice(header, s_idx + 1, header.len));

                            if (str_starts_with(rest, "()")) {
                                methods.appendf("fn %s %s.%s(%s* self) {\n", 
                                    ret_type, current_class, method_name, current_class);
                            } else {
                                String params = safe_slice(rest, 1, rest.len);
                                methods.appendf("fn %s %s.%s(%s* self, %s\n", 
                                    ret_type, current_class, method_name, current_class, params);
                            }
                        }
                    }
                    continue;
                }

                // 6. Inside method body tracking
                if (in_method) {
                    if (str_ends_with(trimmed, "{")) {
                        brace_depth++;
                    } else if (trimmed == "}") {
                        brace_depth--;
                    }

                    if (brace_depth == 0) {
                        methods.append("}\n\n");
                        in_method = false;
                        continue;
                    }

                    String processed = replace_this_safe(line);
                    methods.appendf("%s\n", processed);
                    continue;
                }

                // 7. Fallback for fields
                if (trimmed.len > 0) {
                    String processed = replace_this_safe(line);
                    fields.appendf("%s\n", processed);
                }
                continue;
            }

            out.appendf("%s\n", line);
        }
    }

    // Automatically resolve output filename depending on extension input
    DString path_buf = dstring::new(tmem);
    if (str_ends_with(input_file, ".c3ipp") && input_file.len >= 6) {
        path_buf.appendf("%s.c3", safe_slice(input_file, 0, input_file.len - 6));
    } else if (str_ends_with(input_file, ".c3pp") && input_file.len >= 5) {
        path_buf.appendf("%s.c3", safe_slice(input_file, 0, input_file.len - 5));
    } else if (str_ends_with(input_file, ".c3i") && input_file.len >= 4) {
        path_buf.appendf("%s.c3i", safe_slice(input_file, 0, input_file.len - 4));
    } else {
        path_buf.appendf("%s.c3", input_file);
    }
    String output_file = path_buf.str_view();

    if (catch file::save(output_file, (char[])out.str_view())) {
        io::printfn("Error: Could not save output file '%s'", output_file);
        return;
    }

    io::printfn("Successfully transpiled '%s' -> '%s'", input_file, output_file);
}

fn String safe_slice(String str, usz start, usz end) {
    if (start >= str.len || start >= end) return "";
    usz actual_end = end > str.len ? str.len : end;
    usz count = actual_end - start;
    return str[start : count];
}

fn String str_trim(String str) {
    if (str.len == 0) return "";
    usz start = 0;
    usz end = str.len;
    while (start < end && (str[start] == ' ' || str[start] == '\t' || str[start] == '\r' || str[start] == '\n')) start++;
    while (end > start && (str[end - 1] == ' ' || str[end - 1] == '\t' || str[end - 1] == '\r' || str[end - 1] == '\n')) end--;
    return safe_slice(str, start, end);
}

fn bool str_starts_with(String str, String prefix) {
    if (prefix.len > str.len) return false;
    return safe_slice(str, 0, prefix.len) == prefix;
}

fn bool str_ends_with(String str, String suffix) {
    if (suffix.len > str.len) return false;
    return safe_slice(str, str.len - suffix.len, str.len) == suffix;
}

fn sz find_char(String str, char target) {
    for (usz i = 0; i < str.len; i++) {
        if (str[i] == target) return (sz)i;
    }
    return -1;
}

fn String replace_this_safe(String line) {
    DString sb = dstring::new(tmem);
    usz curr = 0;
    while (curr < line.len) {
        if (curr + 6 <= line.len && safe_slice(line, curr, curr + 6) == "this->") {
            sb.append("self.");
            curr += 6;
        } else if (curr + 5 <= line.len && safe_slice(line, curr, curr + 5) == "this.") {
            sb.append("self.");
            curr += 5;
        } else {
            sb.append_char(line[curr]);
            curr++;
        }
    }
    return sb.str_view();
}