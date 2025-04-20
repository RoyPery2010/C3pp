
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

  virtual void enterClass_declaration(C3ppParser::Class_declarationContext *ctx) = 0;
  virtual void exitClass_declaration(C3ppParser::Class_declarationContext *ctx) = 0;

  virtual void enterClass_member(C3ppParser::Class_memberContext *ctx) = 0;
  virtual void exitClass_member(C3ppParser::Class_memberContext *ctx) = 0;

  virtual void enterMethod_declaration(C3ppParser::Method_declarationContext *ctx) = 0;
  virtual void exitMethod_declaration(C3ppParser::Method_declarationContext *ctx) = 0;

  virtual void enterField_declaration(C3ppParser::Field_declarationContext *ctx) = 0;
  virtual void exitField_declaration(C3ppParser::Field_declarationContext *ctx) = 0;

  virtual void enterParameter_list(C3ppParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(C3ppParser::Parameter_listContext *ctx) = 0;

  virtual void enterParameter(C3ppParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(C3ppParser::ParameterContext *ctx) = 0;

  virtual void enterType(C3ppParser::TypeContext *ctx) = 0;
  virtual void exitType(C3ppParser::TypeContext *ctx) = 0;

  virtual void enterAccess_modifier(C3ppParser::Access_modifierContext *ctx) = 0;
  virtual void exitAccess_modifier(C3ppParser::Access_modifierContext *ctx) = 0;

  virtual void enterBlock(C3ppParser::BlockContext *ctx) = 0;
  virtual void exitBlock(C3ppParser::BlockContext *ctx) = 0;

  virtual void enterStatement(C3ppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(C3ppParser::StatementContext *ctx) = 0;

  virtual void enterAssignment_statement(C3ppParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(C3ppParser::Assignment_statementContext *ctx) = 0;

  virtual void enterIf_statement(C3ppParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(C3ppParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(C3ppParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(C3ppParser::While_statementContext *ctx) = 0;

  virtual void enterReturn_statement(C3ppParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(C3ppParser::Return_statementContext *ctx) = 0;

  virtual void enterExpression_statement(C3ppParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(C3ppParser::Expression_statementContext *ctx) = 0;

  virtual void enterExpression(C3ppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(C3ppParser::ExpressionContext *ctx) = 0;

  virtual void enterBinary_operator(C3ppParser::Binary_operatorContext *ctx) = 0;
  virtual void exitBinary_operator(C3ppParser::Binary_operatorContext *ctx) = 0;


};

