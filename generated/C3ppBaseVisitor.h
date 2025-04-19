
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

  virtual std::any visitClassDeclaration(C3ppParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBody(C3ppParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessModifier(C3ppParser::AccessModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassMember(C3ppParser::ClassMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(C3ppParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArguments(C3ppParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(C3ppParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(C3ppParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(C3ppParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(C3ppParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(C3ppParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(C3ppParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(C3ppParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(C3ppParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(C3ppParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(C3ppParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntExpr(C3ppParser::IntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolExpr(C3ppParser::BoolExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpr(C3ppParser::IdExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAccess(C3ppParser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParensExpr(C3ppParser::ParensExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(C3ppParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayInitExpr(C3ppParser::ArrayInitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(C3ppParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

