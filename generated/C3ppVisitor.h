
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

    virtual std::any visitClassBody(C3ppParser::ClassBodyContext *context) = 0;

    virtual std::any visitAccessModifier(C3ppParser::AccessModifierContext *context) = 0;

    virtual std::any visitClassMember(C3ppParser::ClassMemberContext *context) = 0;

    virtual std::any visitClassMemberDeclaration(C3ppParser::ClassMemberDeclarationContext *context) = 0;

    virtual std::any visitFieldDeclaration(C3ppParser::FieldDeclarationContext *context) = 0;

    virtual std::any visitMethodDeclaration(C3ppParser::MethodDeclarationContext *context) = 0;

    virtual std::any visitFunctionDeclaration(C3ppParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitArguments(C3ppParser::ArgumentsContext *context) = 0;

    virtual std::any visitFunctionCall(C3ppParser::FunctionCallContext *context) = 0;

    virtual std::any visitParameterList(C3ppParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(C3ppParser::ParameterContext *context) = 0;

    virtual std::any visitBlock(C3ppParser::BlockContext *context) = 0;

    virtual std::any visitStatement(C3ppParser::StatementContext *context) = 0;

    virtual std::any visitVariableDeclaration(C3ppParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitReturnStatement(C3ppParser::ReturnStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(C3ppParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitIfStatement(C3ppParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(C3ppParser::WhileStatementContext *context) = 0;

    virtual std::any visitAssignment(C3ppParser::AssignmentContext *context) = 0;

    virtual std::any visitExpression(C3ppParser::ExpressionContext *context) = 0;

    virtual std::any visitIntExpr(C3ppParser::IntExprContext *context) = 0;

    virtual std::any visitBoolExpr(C3ppParser::BoolExprContext *context) = 0;

    virtual std::any visitIdExpr(C3ppParser::IdExprContext *context) = 0;

    virtual std::any visitArrayAccess(C3ppParser::ArrayAccessContext *context) = 0;

    virtual std::any visitParensExpr(C3ppParser::ParensExprContext *context) = 0;

    virtual std::any visitPrimary(C3ppParser::PrimaryContext *context) = 0;

    virtual std::any visitArrayInitExpr(C3ppParser::ArrayInitExprContext *context) = 0;

    virtual std::any visitType(C3ppParser::TypeContext *context) = 0;

    virtual std::any visitQualifiedIdentifier(C3ppParser::QualifiedIdentifierContext *context) = 0;


};

