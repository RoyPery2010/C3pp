
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

  virtual void enterClass_declaration(C3ppParser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(C3ppParser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterClass_member(C3ppParser::Class_memberContext * /*ctx*/) override { }
  virtual void exitClass_member(C3ppParser::Class_memberContext * /*ctx*/) override { }

  virtual void enterMethod_declaration(C3ppParser::Method_declarationContext * /*ctx*/) override { }
  virtual void exitMethod_declaration(C3ppParser::Method_declarationContext * /*ctx*/) override { }

  virtual void enterField_declaration(C3ppParser::Field_declarationContext * /*ctx*/) override { }
  virtual void exitField_declaration(C3ppParser::Field_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_list(C3ppParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(C3ppParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParameter(C3ppParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(C3ppParser::ParameterContext * /*ctx*/) override { }

  virtual void enterType(C3ppParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(C3ppParser::TypeContext * /*ctx*/) override { }

  virtual void enterAccess_modifier(C3ppParser::Access_modifierContext * /*ctx*/) override { }
  virtual void exitAccess_modifier(C3ppParser::Access_modifierContext * /*ctx*/) override { }

  virtual void enterBlock(C3ppParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(C3ppParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(C3ppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(C3ppParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(C3ppParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(C3ppParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(C3ppParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(C3ppParser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(C3ppParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(C3ppParser::While_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(C3ppParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(C3ppParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(C3ppParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(C3ppParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(C3ppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterBinary_operator(C3ppParser::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(C3ppParser::Binary_operatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

