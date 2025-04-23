
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

  virtual void enterInheritanceSpec(C3ppParser::InheritanceSpecContext * /*ctx*/) override { }
  virtual void exitInheritanceSpec(C3ppParser::InheritanceSpecContext * /*ctx*/) override { }

  virtual void enterClassBody(C3ppParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(C3ppParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterAccessSection(C3ppParser::AccessSectionContext * /*ctx*/) override { }
  virtual void exitAccessSection(C3ppParser::AccessSectionContext * /*ctx*/) override { }

  virtual void enterFieldDecl(C3ppParser::FieldDeclContext * /*ctx*/) override { }
  virtual void exitFieldDecl(C3ppParser::FieldDeclContext * /*ctx*/) override { }

  virtual void enterMethodDecl(C3ppParser::MethodDeclContext * /*ctx*/) override { }
  virtual void exitMethodDecl(C3ppParser::MethodDeclContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(C3ppParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(C3ppParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(C3ppParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(C3ppParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterType(C3ppParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(C3ppParser::TypeContext * /*ctx*/) override { }

  virtual void enterClassSection(C3ppParser::ClassSectionContext * /*ctx*/) override { }
  virtual void exitClassSection(C3ppParser::ClassSectionContext * /*ctx*/) override { }

  virtual void enterClassMember(C3ppParser::ClassMemberContext * /*ctx*/) override { }
  virtual void exitClassMember(C3ppParser::ClassMemberContext * /*ctx*/) override { }

  virtual void enterParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(C3ppParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterBaseType(C3ppParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(C3ppParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterPointerOrReference(C3ppParser::PointerOrReferenceContext * /*ctx*/) override { }
  virtual void exitPointerOrReference(C3ppParser::PointerOrReferenceContext * /*ctx*/) override { }

  virtual void enterAccess_modifier(C3ppParser::Access_modifierContext * /*ctx*/) override { }
  virtual void exitAccess_modifier(C3ppParser::Access_modifierContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(C3ppParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterParameter(C3ppParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(C3ppParser::ParameterContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(C3ppParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(C3ppParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(C3ppParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(C3ppParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(C3ppParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(C3ppParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(C3ppParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(C3ppParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(C3ppParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(C3ppParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(C3ppParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(C3ppParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBlock(C3ppParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(C3ppParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(C3ppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(C3ppParser::StatementContext * /*ctx*/) override { }

  virtual void enterPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(C3ppParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(C3ppParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(C3ppParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(C3ppParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(C3ppParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(C3ppParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(C3ppParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(C3ppParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(C3ppParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(C3ppParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(C3ppParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(C3ppParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(C3ppParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(C3ppParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(C3ppParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(C3ppParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(C3ppParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(C3ppParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(C3ppParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryOp(C3ppParser::BinaryOpContext * /*ctx*/) override { }
  virtual void exitBinaryOp(C3ppParser::BinaryOpContext * /*ctx*/) override { }

  virtual void enterAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(C3ppParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterLiteral(C3ppParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(C3ppParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIf_statement(C3ppParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(C3ppParser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(C3ppParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(C3ppParser::While_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(C3ppParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(C3ppParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(C3ppParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(C3ppParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterForInit(C3ppParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(C3ppParser::ForInitContext * /*ctx*/) override { }

  virtual void enterForCondition(C3ppParser::ForConditionContext * /*ctx*/) override { }
  virtual void exitForCondition(C3ppParser::ForConditionContext * /*ctx*/) override { }

  virtual void enterForUpdate(C3ppParser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(C3ppParser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterRangeForStatement(C3ppParser::RangeForStatementContext * /*ctx*/) override { }
  virtual void exitRangeForStatement(C3ppParser::RangeForStatementContext * /*ctx*/) override { }

  virtual void enterFunctionCall(C3ppParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(C3ppParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgumentList(C3ppParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(C3ppParser::ArgumentListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

