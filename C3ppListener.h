
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

  virtual void enterConstructorDeclaration(C3ppParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(C3ppParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodBody(C3ppParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(C3ppParser::MethodBodyContext *ctx) = 0;

  virtual void enterFunctionDeclaration(C3ppParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(C3ppParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterParameterList(C3ppParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(C3ppParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(C3ppParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(C3ppParser::ParameterContext *ctx) = 0;

  virtual void enterType(C3ppParser::TypeContext *ctx) = 0;
  virtual void exitType(C3ppParser::TypeContext *ctx) = 0;

  virtual void enterBlock(C3ppParser::BlockContext *ctx) = 0;
  virtual void exitBlock(C3ppParser::BlockContext *ctx) = 0;

  virtual void enterStatement(C3ppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(C3ppParser::StatementContext *ctx) = 0;

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext *ctx) = 0;

  virtual void enterExpression(C3ppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(C3ppParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment(C3ppParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(C3ppParser::AssignmentContext *ctx) = 0;

  virtual void enterEquality(C3ppParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(C3ppParser::EqualityContext *ctx) = 0;

  virtual void enterComparison(C3ppParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(C3ppParser::ComparisonContext *ctx) = 0;

  virtual void enterAddition(C3ppParser::AdditionContext *ctx) = 0;
  virtual void exitAddition(C3ppParser::AdditionContext *ctx) = 0;

  virtual void enterMultiplication(C3ppParser::MultiplicationContext *ctx) = 0;
  virtual void exitMultiplication(C3ppParser::MultiplicationContext *ctx) = 0;

  virtual void enterUnary(C3ppParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(C3ppParser::UnaryContext *ctx) = 0;

  virtual void enterPrimary(C3ppParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(C3ppParser::PrimaryContext *ctx) = 0;


};

