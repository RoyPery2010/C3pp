
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

  virtual std::any visitInheritanceSpec(C3ppParser::InheritanceSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBody(C3ppParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessSection(C3ppParser::AccessSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldDecl(C3ppParser::FieldDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDecl(C3ppParser::MethodDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessSpecifier(C3ppParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(C3ppParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassSection(C3ppParser::ClassSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassMember(C3ppParser::ClassMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(C3ppParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseType(C3ppParser::BaseTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerOrReference(C3ppParser::PointerOrReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_modifier(C3ppParser::Access_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(C3ppParser::ParameterContext *ctx) override {
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

  virtual std::any visitForStatement(C3ppParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(C3ppParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStatement(C3ppParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStatement(C3ppParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(C3ppParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(C3ppParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(C3ppParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(C3ppParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(C3ppParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(C3ppParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(C3ppParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(C3ppParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(C3ppParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(C3ppParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(C3ppParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(C3ppParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(C3ppParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryOp(C3ppParser::BinaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(C3ppParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(C3ppParser::LiteralContext *ctx) override {
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

  virtual std::any visitForInit(C3ppParser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForCondition(C3ppParser::ForConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForUpdate(C3ppParser::ForUpdateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeForStatement(C3ppParser::RangeForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(C3ppParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(C3ppParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }


};

