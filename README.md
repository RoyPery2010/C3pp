# C3++

A small **C3++-to-C3 transpiler** that adds familiar class-based syntax to the
[C3 programming language](https://c3-lang.org/). C3 itself is a modern systems
language with a C-like syntax; this tool lets you write code in a more
object-oriented style (`class`, constructors, destructors, `this.`) and
translates it to the equivalent idiomatic C3 (structs with init/finalize
functions, `self.`) so the standard C3 compiler can consume it.

## What it does

Given an input file using C3++ syntax (`hello.c3pp`):

```c3pp
module hello;

import std::io;

class Greeter {
public:
    int id;

    Greeter() {
        this.id = 42;
    }

    fn void say_hello() {
        io::printfn("Hello World from C3++! Greeter ID: %d", this.id);
    }

    ~Greeter() {
        io::printn("Greeter destroyed cleanly.");
    }
}

fn void main(String[] args) {
    Greeter g;
    g.say_hello();
}
```

…the transpiler produces the equivalent C3 (`hello.c3`):

```c
module hello;

import std::io;

struct Greeter {
    // public:
    int id;
    // Default constructor with no parameters


}

fn void Greeter.init(Greeter* self) {
        self.id = 42;
}

fn void Greeter.say_hello(Greeter* self) {
        io::printfn("Hello World from C3++! Greeter ID: %d", self.id);
}

fn void Greeter.finalize(Greeter* self) {
        io::printn("Greeter destroyed cleanly.");
}

fn void main(String[] args) {
    Greeter g;
    Greeter.init(&g);
    defer Greeter.finalize(&g);
    g.say_hello();
}
```

The transpiler is itself written in C3 (`c3ppc.c3`).

## Features

| C3++ feature                     | C3 equivalent                                          |
| -------------------------------- | ------------------------------------------------------ |
| `class Foo { … }`                | `struct Foo { … }`                                     |
| `Foo(...) { … }` constructor     | `fn void Foo.init(Foo* self, …) { … }`                 |
| `~Foo() { … }` destructor        | `fn void Foo.finalize(Foo* self) { … }`                |
| `this.foo`                       | `self.foo`                                             |
| `namespace ns { … }`             | `module ns;` plus the body emitted directly            |
| `template <typename T>`          | C3 generic struct: `struct Foo($T)` (single-param)     |
| `class Foo : Bar { … }`          | Embedded `inline Bar base;` field in the struct        |
| `Foo x;` of class type (any scope) | Auto-emits `x.init(&x); defer x.finalize(&x);`        |
| `unique_ptr<T> x;`               | `T* x;`                                                |
| `virtual` / `override` fns       | Plain `fn …` methods (no vtable — see Limitations)     |
| `public:` / `private:`           | Comment marker / `@private`                            |

> ⚠️ `virtual` / `override` are parsed but currently become plain methods —
> vtable generation is **not** implemented yet.

## Building

You need a C3 compiler installed (see [c3-lang.org](https://c3-lang.org/) for
installation). Then:

```bash
# Compile the transpiler from its own C3 source
c3c compile c3ppc.c3

# You should now see a `c3ppc` executable in the current directory
./c3ppc
# Usage: c3++c <input.c3pp>
```

The supplied `c3ppc` binary in this repo is just a pre-built copy so you can
try it without compiling first.

## Usage

```bash
# Transpile a C3++ source file → produces foo.c3
./c3ppc foo.c3pp

# Then compile the generated C3 source with the C3 compiler
c3c compile foo.c3

# Run it
./foo
```

### Quick start with the included example

```bash
cd /path/to/C3++     # or wherever you cloned this repo
./c3ppc hello.c3pp   # → hello.c3
c3c compile hello.c3 # → hello
./hello              # → "Hello World from C3++! Greeter ID: 42"
```

## Project layout

```
.
├── c3ppc.c3          # the transpiler (source)
├── c3ppc             # pre-built transpiler binary
├── hello.c3pp        # C3++ example source
├── hello.c3          # example output (transpiled)
└── hello             # compiled example binary
```

## Limitations

This is an early-stage transpiler. Known limitations:

- **Single template parameter** — `template <typename T>` translates to
  `struct Foo($T)`. Multiple parameters are not yet supported.
- **No real function-scope tracking.** The parser only tracks class/method
  bodies, not C3 functions. As a result, `x.init(&x); defer x.finalize(&x);`
  is auto-injected for *every* class-typed variable it sees — including
  locals inside `fn main()`. If you write those calls explicitly they will be
  duplicated.
- **`_dummy` field quirk.** Empty classes get an auto-inserted
  `char _dummy;` field so the resulting C3 `struct` is non-empty. Don't be
  surprised if it shows up in generated output.
- **No vtable generation** — `virtual` and `override` are accepted but become
  plain methods. True polymorphic dispatch is not implemented.
- **String helpers** (`str_trim`, `find_char`, `safe_slice`, etc.) are
  reimplemented locally inside `c3ppc.c3` rather than using `std::string`.
- **No proper module/include system** — `namespace` is converted to `module`,
  which means files containing C3++ namespaces cannot be `import`ed from
  other C3++ files the way ordinary C3 modules can.
- **Error handling** is minimal; unexpected input may produce surprising
  output rather than a clean diagnostic.

## License

Released under the MIT License — see [`LICENSE.md`](./LICENSE.md).

> **Before publishing, edit the copyright line in `LICENSE.md` to your own
> name (and update the year if needed).**

## Contributing

Pull requests welcome, especially around:

- Multi-parameter template support
- Vtable generation for `virtual`/`override`
- Better diagnostic messages on malformed input
- Reuse of `std::string` instead of local string helpers

Please keep the code style consistent with the existing file (`c3ppc.c3`).
