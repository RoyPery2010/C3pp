
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C3ppParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by C3ppParser.
 */
class  C3ppVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by C3ppParser.
   */
    virtual std::any visitProgram(C3ppParser::ProgramContext *context) = 0;

    virtual std::any visitClassDeclaration(C3ppParser::ClassDeclarationContext *context) = 0;

    virtual std::any visitInheritanceSpec(C3ppParser::InheritanceSpecContext *context) = 0;

    virtual std::any visitClassBody(C3ppParser::ClassBodyContext *context) = 0;

    virtual std::any visitAccessSection(C3ppParser::AccessSectionContext *context) = 0;

    virtual std::any visitFieldDecl(C3ppParser::FieldDeclContext *context) = 0;

    virtual std::any visitMethodDecl(C3ppParser::MethodDeclContext *context) = 0;

    virtual std::any visitAccessSpecifier(C3ppParser::AccessSpecifierContext *context) = 0;

    virtual std::any visitVariableDeclaration(C3ppParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitMethodDeclaration(C3ppParser::MethodDeclarationContext *context) = 0;

    virtual std::any visitType(C3ppParser::TypeContext *context) = 0;

    virtual std::any visitClassSection(C3ppParser::ClassSectionContext *context) = 0;

    virtual std::any visitClassMember(C3ppParser::ClassMemberContext *context) = 0;

    virtual std::any visitParameterList(C3ppParser::ParameterListContext *context) = 0;

    virtual std::any visitBaseType(C3ppParser::BaseTypeContext *context) = 0;

    virtual std::any visitPointerOrReference(C3ppParser::PointerOrReferenceContext *context) = 0;

    virtual std::any visitAccess_modifier(C3ppParser::Access_modifierContext *context) = 0;

    virtual std::any visitFieldDeclaration(C3ppParser::FieldDeclarationContext *context) = 0;

    virtual std::any visitParameter(C3ppParser::ParameterContext *context) = 0;

    virtual std::any visitExpressionStatement(C3ppParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitIfStatement(C3ppParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(C3ppParser::WhileStatementContext *context) = 0;

    virtual std::any visitForStatement(C3ppParser::ForStatementContext *context) = 0;

    virtual std::any visitReturnStatement(C3ppParser::ReturnStatementContext *context) = 0;

    virtual std::any visitBreakStatement(C3ppParser::BreakStatementContext *context) = 0;

    virtual std::any visitContinueStatement(C3ppParser::ContinueStatementContext *context) = 0;

    virtual std::any visitBlock(C3ppParser::BlockContext *context) = 0;

    virtual std::any visitStatement(C3ppParser::StatementContext *context) = 0;

    virtual std::any visitPrimary(C3ppParser::PrimaryContext *context) = 0;

    virtual std::any visitExpression(C3ppParser::ExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(C3ppParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(C3ppParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(C3ppParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(C3ppParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(C3ppParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(C3ppParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(C3ppParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(C3ppParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitPostfixExpression(C3ppParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitPrimaryExpression(C3ppParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitBinaryOp(C3ppParser::BinaryOpContext *context) = 0;

    virtual std::any visitAssignment(C3ppParser::AssignmentContext *context) = 0;

    virtual std::any visitLiteral(C3ppParser::LiteralContext *context) = 0;

    virtual std::any visitIf_statement(C3ppParser::If_statementContext *context) = 0;

    virtual std::any visitWhile_statement(C3ppParser::While_statementContext *context) = 0;

    virtual std::any visitReturn_statement(C3ppParser::Return_statementContext *context) = 0;

    virtual std::any visitExpression_statement(C3ppParser::Expression_statementContext *context) = 0;

    virtual std::any visitForInit(C3ppParser::ForInitContext *context) = 0;

    virtual std::any visitForCondition(C3ppParser::ForConditionContext *context) = 0;

    virtual std::any visitForUpdate(C3ppParser::ForUpdateContext *context) = 0;

    virtual std::any visitRangeForStatement(C3ppParser::RangeForStatementContext *context) = 0;

    virtual std::any visitFunctionCall(C3ppParser::FunctionCallContext *context) = 0;

    virtual std::any visitArgumentList(C3ppParser::ArgumentListContext *context) = 0;


};

