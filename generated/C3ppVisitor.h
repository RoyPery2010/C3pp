
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

    virtual std::any visitClass_declaration(C3ppParser::Class_declarationContext *context) = 0;

    virtual std::any visitClass_member(C3ppParser::Class_memberContext *context) = 0;

    virtual std::any visitMethod_declaration(C3ppParser::Method_declarationContext *context) = 0;

    virtual std::any visitField_declaration(C3ppParser::Field_declarationContext *context) = 0;

    virtual std::any visitParameter_list(C3ppParser::Parameter_listContext *context) = 0;

    virtual std::any visitParameter(C3ppParser::ParameterContext *context) = 0;

    virtual std::any visitType(C3ppParser::TypeContext *context) = 0;

    virtual std::any visitAccess_modifier(C3ppParser::Access_modifierContext *context) = 0;

    virtual std::any visitBlock(C3ppParser::BlockContext *context) = 0;

    virtual std::any visitStatement(C3ppParser::StatementContext *context) = 0;

    virtual std::any visitAssignment_statement(C3ppParser::Assignment_statementContext *context) = 0;

    virtual std::any visitIf_statement(C3ppParser::If_statementContext *context) = 0;

    virtual std::any visitWhile_statement(C3ppParser::While_statementContext *context) = 0;

    virtual std::any visitReturn_statement(C3ppParser::Return_statementContext *context) = 0;

    virtual std::any visitExpression_statement(C3ppParser::Expression_statementContext *context) = 0;

    virtual std::any visitExpression(C3ppParser::ExpressionContext *context) = 0;

    virtual std::any visitBinary_operator(C3ppParser::Binary_operatorContext *context) = 0;


};

