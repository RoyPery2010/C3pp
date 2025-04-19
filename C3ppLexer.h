
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C3ppLexer : public antlr4::Lexer {
public:
  enum {
    CLASS = 1, INT = 2, FLOAT = 3, BOOL = 4, IF = 5, ELSE = 6, RETURN = 7, 
    TRUE = 8, FALSE = 9, VOID = 10, ASSIGN = 11, ADD = 12, SUB = 13, MUL = 14, 
    DIV = 15, EQ = 16, NEQ = 17, LT = 18, GT = 19, LE = 20, GE = 21, NOT = 22, 
    LPAREN = 23, RPAREN = 24, LBRACE = 25, RBRACE = 26, COMMA = 27, SEMI = 28, 
    INT_LITERAL = 29, FLOAT_LITERAL = 30, BOOL_LITERAL = 31, IDENTIFIER = 32, 
    WS = 33, LINE_COMMENT = 34, BLOCK_COMMENT = 35
  };

  explicit C3ppLexer(antlr4::CharStream *input);

  ~C3ppLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

