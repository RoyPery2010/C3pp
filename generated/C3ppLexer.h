
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C3ppLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, LINE_COMMENT = 5, BLOCK_COMMENT = 6, 
    AND = 7, OR = 8, NOT = 9, CLASS = 10, RETURN = 11, INT = 12, IF = 13, 
    ELSE = 14, WHILE = 15, SEMI = 16, COMMA = 17, ASSIGN = 18, EQ = 19, 
    NEQ = 20, LT = 21, LE = 22, GT = 23, GE = 24, LPAREN = 25, RPAREN = 26, 
    LBRACE = 27, RBRACE = 28, PLUS = 29, MINUS = 30, MULT = 31, DIV = 32, 
    COLONCOLON = 33, STD = 34, IDENTIFIER = 35, INT_LITERAL = 36, BOOLEAN_LITERAL = 37, 
    WS = 38, PUBLIC = 39, PRIVATE = 40
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

