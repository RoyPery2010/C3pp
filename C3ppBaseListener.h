
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C3ppListener.h"


/**
 * This class provides an empty implementation of C3ppListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  C3ppBaseListener : public C3ppListener {
public:

  virtual void enterProgram(C3ppParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(C3ppParser::ProgramContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(C3ppParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(C3ppParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassBody(C3ppParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(C3ppParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(C3ppParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(C3ppParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodBody(C3ppParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(C3ppParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(C3ppParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(C3ppParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(C3ppParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(C3ppParser::ParameterContext * /*ctx*/) override { }

  virtual void enterType(C3ppParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(C3ppParser::TypeContext * /*ctx*/) override { }

  virtual void enterBlock(C3ppParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(C3ppParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(C3ppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(C3ppParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterEquality(C3ppParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(C3ppParser::EqualityContext * /*ctx*/) override { }

  virtual void enterComparison(C3ppParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(C3ppParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterAddition(C3ppParser::AdditionContext * /*ctx*/) override { }
  virtual void exitAddition(C3ppParser::AdditionContext * /*ctx*/) override { }

  virtual void enterMultiplication(C3ppParser::MultiplicationContext * /*ctx*/) override { }
  virtual void exitMultiplication(C3ppParser::MultiplicationContext * /*ctx*/) override { }

  virtual void enterUnary(C3ppParser::UnaryContext * /*ctx*/) override { }
  virtual void exitUnary(C3ppParser::UnaryContext * /*ctx*/) override { }

  virtual void enterPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

