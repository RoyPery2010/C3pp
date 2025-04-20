
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C3ppVisitor.h"


/**
 * This class provides an empty implementation of C3ppVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  C3ppBaseVisitor : public C3ppVisitor {
public:

  virtual std::any visitProgram(C3ppParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_declaration(C3ppParser::Class_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_member(C3ppParser::Class_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_declaration(C3ppParser::Method_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_declaration(C3ppParser::Field_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_list(C3ppParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(C3ppParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(C3ppParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_modifier(C3ppParser::Access_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(C3ppParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(C3ppParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_statement(C3ppParser::Assignment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(C3ppParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(C3ppParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(C3ppParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_statement(C3ppParser::Expression_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(C3ppParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator(C3ppParser::Binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

