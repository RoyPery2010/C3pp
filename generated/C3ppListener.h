
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C3ppParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by C3ppParser.
 */
class  C3ppListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(C3ppParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(C3ppParser::ProgramContext *ctx) = 0;

  virtual void enterClassDeclaration(C3ppParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(C3ppParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterInheritanceSpec(C3ppParser::InheritanceSpecContext *ctx) = 0;
  virtual void exitInheritanceSpec(C3ppParser::InheritanceSpecContext *ctx) = 0;

  virtual void enterClassBody(C3ppParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(C3ppParser::ClassBodyContext *ctx) = 0;

  virtual void enterAccessSection(C3ppParser::AccessSectionContext *ctx) = 0;
  virtual void exitAccessSection(C3ppParser::AccessSectionContext *ctx) = 0;

  virtual void enterFieldDecl(C3ppParser::FieldDeclContext *ctx) = 0;
  virtual void exitFieldDecl(C3ppParser::FieldDeclContext *ctx) = 0;

  virtual void enterMethodDecl(C3ppParser::MethodDeclContext *ctx) = 0;
  virtual void exitMethodDecl(C3ppParser::MethodDeclContext *ctx) = 0;

  virtual void enterAccessSpecifier(C3ppParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(C3ppParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterType(C3ppParser::TypeContext *ctx) = 0;
  virtual void exitType(C3ppParser::TypeContext *ctx) = 0;

  virtual void enterClassSection(C3ppParser::ClassSectionContext *ctx) = 0;
  virtual void exitClassSection(C3ppParser::ClassSectionContext *ctx) = 0;

  virtual void enterClassMember(C3ppParser::ClassMemberContext *ctx) = 0;
  virtual void exitClassMember(C3ppParser::ClassMemberContext *ctx) = 0;

  virtual void enterParameterList(C3ppParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(C3ppParser::ParameterListContext *ctx) = 0;

  virtual void enterBaseType(C3ppParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(C3ppParser::BaseTypeContext *ctx) = 0;

  virtual void enterPointerOrReference(C3ppParser::PointerOrReferenceContext *ctx) = 0;
  virtual void exitPointerOrReference(C3ppParser::PointerOrReferenceContext *ctx) = 0;

  virtual void enterAccess_modifier(C3ppParser::Access_modifierContext *ctx) = 0;
  virtual void exitAccess_modifier(C3ppParser::Access_modifierContext *ctx) = 0;

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterParameter(C3ppParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(C3ppParser::ParameterContext *ctx) = 0;

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(C3ppParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(C3ppParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(C3ppParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(C3ppParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(C3ppParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(C3ppParser::ForStatementContext *ctx) = 0;

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;

  virtual void enterBreakStatement(C3ppParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(C3ppParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(C3ppParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(C3ppParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBlock(C3ppParser::BlockContext *ctx) = 0;
  virtual void exitBlock(C3ppParser::BlockContext *ctx) = 0;

  virtual void enterStatement(C3ppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(C3ppParser::StatementContext *ctx) = 0;

  virtual void enterPrimary(C3ppParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(C3ppParser::PrimaryContext *ctx) = 0;

  virtual void enterExpression(C3ppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(C3ppParser::ExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(C3ppParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(C3ppParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(C3ppParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(C3ppParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(C3ppParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(C3ppParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(C3ppParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(C3ppParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(C3ppParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(C3ppParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(C3ppParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(C3ppParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(C3ppParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(C3ppParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(C3ppParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(C3ppParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(C3ppParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(C3ppParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterBinaryOp(C3ppParser::BinaryOpContext *ctx) = 0;
  virtual void exitBinaryOp(C3ppParser::BinaryOpContext *ctx) = 0;

  virtual void enterAssignment(C3ppParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(C3ppParser::AssignmentContext *ctx) = 0;

  virtual void enterLiteral(C3ppParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(C3ppParser::LiteralContext *ctx) = 0;

  virtual void enterIf_statement(C3ppParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(C3ppParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(C3ppParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(C3ppParser::While_statementContext *ctx) = 0;

  virtual void enterReturn_statement(C3ppParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(C3ppParser::Return_statementContext *ctx) = 0;

  virtual void enterExpression_statement(C3ppParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(C3ppParser::Expression_statementContext *ctx) = 0;

  virtual void enterForInit(C3ppParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(C3ppParser::ForInitContext *ctx) = 0;

  virtual void enterForCondition(C3ppParser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(C3ppParser::ForConditionContext *ctx) = 0;

  virtual void enterForUpdate(C3ppParser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(C3ppParser::ForUpdateContext *ctx) = 0;

  virtual void enterRangeForStatement(C3ppParser::RangeForStatementContext *ctx) = 0;
  virtual void exitRangeForStatement(C3ppParser::RangeForStatementContext *ctx) = 0;

  virtual void enterFunctionCall(C3ppParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(C3ppParser::FunctionCallContext *ctx) = 0;

  virtual void enterArgumentList(C3ppParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(C3ppParser::ArgumentListContext *ctx) = 0;


};

