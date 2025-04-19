#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>

#include "antlr4-runtime.h"
#include "C3ppLexer.h"        // No 'generated::' needed
#include "C3ppParser.h"       // No 'generated::' needed
#include "C3ppBaseVisitor.h"  // No 'generated::' needed

using namespace antlr4;
/*
// Visitor to handle return statements, methods, and classes
class ReturnVisitor : public C3ppBaseVisitor { // No 'generated::' needed
private:
    std::stack<std::string> scopeStack;  // Stack to track scope (method or class)
    int returnDepth = 0;  // To track the depth of return statements

public:

    // Override for handling return statements
    antlrcpp::Any visitReturnStatement(C3ppParser::ReturnStatementContext *ctx) override {  // No 'generated::' needed
        std::cout << "Found return statement";
        
        // Print method/class context and return expression
        if (!scopeStack.empty()) {
            std::cout << " in " << scopeStack.top();
        }
        
        // Check if there's an expression and print it
        if (ctx->expression()) {
            std::cout << " with expression: " << ctx->expression()->getText();
        } else {
            std::cout << " with no expression";
        }
        
        std::cout << " (Depth: " << returnDepth << ")" << std::endl;
        
        // Visit the children of the return statement
        return visitChildren(ctx);
    }

    // Override for handling method declarations
    antlrcpp::Any visitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) override {  // No 'generated::' needed
        std::string methodName = ctx->IDENTIFIER()->getText();
        std::cout << "Entering method: " << methodName << std::endl;
        
        // Push method to scope stack
        scopeStack.push("method " + methodName);
        
        // Visit the method body
        antlrcpp::Any result = visitChildren(ctx);
        
        // Pop the method from the scope stack
        scopeStack.pop();
        
        return result;
    }

    // Override for handling class declarations
    antlrcpp::Any visitClassDeclaration(C3ppParser::ClassDeclarationContext *ctx) override {  // No 'generated::' needed
        std::string className = ctx->IDENTIFIER()->getText();
        std::cout << "Entering class: " << className << std::endl;
        
        // Push class to scope stack
        scopeStack.push("class " + className);
        
        // Visit the class body
        antlrcpp::Any result = visitChildren(ctx);
        
        // Pop the class from the scope stack
        scopeStack.pop();
        
        return result;
    }

    // Override for method body (just for completeness)
    antlrcpp::Any visitMethodBody(C3ppParser::MethodBodyContext *ctx) override {
        std::cout << "Visiting method body" << std::endl;
        return visitChildren(ctx);
    }
};
*/
int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: c3++c <source.c3pp>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream) {
        std::cerr << "Could not open file: " << argv[1] << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << stream.rdbuf();

    ANTLRInputStream input(buffer.str());
    C3ppLexer lexer(&input);  // No 'generated::' needed
    CommonTokenStream tokens(&lexer);
    C3ppParser parser(&tokens);  // No 'generated::' needed

    tree::ParseTree *tree = parser.program();
    std::cout << "Parse tree: " << tree->toStringTree(&parser, true) << std::endl;
    std::cout << "Parsing completed." << std::endl;

    // Create a visitor to handle the parse tree
    //ReturnVisitor visitor;
    //visitor.visit(tree);

    return 0;
}

