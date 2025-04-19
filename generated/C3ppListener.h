
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

  virtual void enterClassBody(C3ppParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(C3ppParser::ClassBodyContext *ctx) = 0;

  virtual void enterAccessModifier(C3ppParser::AccessModifierContext *ctx) = 0;
  virtual void exitAccessModifier(C3ppParser::AccessModifierContext *ctx) = 0;

  virtual void enterClassMember(C3ppParser::ClassMemberContext *ctx) = 0;
  virtual void exitClassMember(C3ppParser::ClassMemberContext *ctx) = 0;

  virtual void enterClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext *ctx) = 0;
  virtual void exitClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclaration(C3ppParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(C3ppParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterArguments(C3ppParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(C3ppParser::ArgumentsContext *ctx) = 0;

  virtual void enterFunctionCall(C3ppParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(C3ppParser::FunctionCallContext *ctx) = 0;

  virtual void enterParameterList(C3ppParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(C3ppParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(C3ppParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(C3ppParser::ParameterContext *ctx) = 0;

  virtual void enterBlock(C3ppParser::BlockContext *ctx) = 0;
  virtual void exitBlock(C3ppParser::BlockContext *ctx) = 0;

  virtual void enterStatement(C3ppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(C3ppParser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(C3ppParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(C3ppParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(C3ppParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(C3ppParser::WhileStatementContext *ctx) = 0;

  virtual void enterAssignment(C3ppParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(C3ppParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(C3ppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(C3ppParser::ExpressionContext *ctx) = 0;

  virtual void enterIntExpr(C3ppParser::IntExprContext *ctx) = 0;
  virtual void exitIntExpr(C3ppParser::IntExprContext *ctx) = 0;

  virtual void enterBoolExpr(C3ppParser::BoolExprContext *ctx) = 0;
  virtual void exitBoolExpr(C3ppParser::BoolExprContext *ctx) = 0;

  virtual void enterIdExpr(C3ppParser::IdExprContext *ctx) = 0;
  virtual void exitIdExpr(C3ppParser::IdExprContext *ctx) = 0;

  virtual void enterArrayAccess(C3ppParser::ArrayAccessContext *ctx) = 0;
  virtual void exitArrayAccess(C3ppParser::ArrayAccessContext *ctx) = 0;

  virtual void enterParensExpr(C3ppParser::ParensExprContext *ctx) = 0;
  virtual void exitParensExpr(C3ppParser::ParensExprContext *ctx) = 0;

  virtual void enterPrimary(C3ppParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(C3ppParser::PrimaryContext *ctx) = 0;

  virtual void enterArrayInitExpr(C3ppParser::ArrayInitExprContext *ctx) = 0;
  virtual void exitArrayInitExpr(C3ppParser::ArrayInitExprContext *ctx) = 0;

  virtual void enterType(C3ppParser::TypeContext *ctx) = 0;
  virtual void exitType(C3ppParser::TypeContext *ctx) = 0;

  virtual void enterQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext *ctx) = 0;
  virtual void exitQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext *ctx) = 0;


};

