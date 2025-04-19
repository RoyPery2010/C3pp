
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

  virtual void enterAccessModifier(C3ppParser::AccessModifierContext * /*ctx*/) override { }
  virtual void exitAccessModifier(C3ppParser::AccessModifierContext * /*ctx*/) override { }

  virtual void enterClassMember(C3ppParser::ClassMemberContext * /*ctx*/) override { }
  virtual void exitClassMember(C3ppParser::ClassMemberContext * /*ctx*/) override { }

  virtual void enterClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(C3ppParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(C3ppParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterArguments(C3ppParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(C3ppParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterFunctionCall(C3ppParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(C3ppParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(C3ppParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(C3ppParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBlock(C3ppParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(C3ppParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(C3ppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(C3ppParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(C3ppParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(C3ppParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(C3ppParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(C3ppParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterIntExpr(C3ppParser::IntExprContext * /*ctx*/) override { }
  virtual void exitIntExpr(C3ppParser::IntExprContext * /*ctx*/) override { }

  virtual void enterBoolExpr(C3ppParser::BoolExprContext * /*ctx*/) override { }
  virtual void exitBoolExpr(C3ppParser::BoolExprContext * /*ctx*/) override { }

  virtual void enterIdExpr(C3ppParser::IdExprContext * /*ctx*/) override { }
  virtual void exitIdExpr(C3ppParser::IdExprContext * /*ctx*/) override { }

  virtual void enterArrayAccess(C3ppParser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(C3ppParser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterParensExpr(C3ppParser::ParensExprContext * /*ctx*/) override { }
  virtual void exitParensExpr(C3ppParser::ParensExprContext * /*ctx*/) override { }

  virtual void enterPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterArrayInitExpr(C3ppParser::ArrayInitExprContext * /*ctx*/) override { }
  virtual void exitArrayInitExpr(C3ppParser::ArrayInitExprContext * /*ctx*/) override { }

  virtual void enterType(C3ppParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(C3ppParser::TypeContext * /*ctx*/) override { }

  virtual void enterQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext * /*ctx*/) override { }
  virtual void exitQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

