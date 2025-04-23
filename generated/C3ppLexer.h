
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C3ppLexer : public antlr4::Lexer {
public:
  enum {
    SEMI = 1, ASSIGN = 2, COMMA = 3, LPAREN = 4, RPAREN = 5, LBRACE = 6, 
    RBRACE = 7, NOT = 8, AND = 9, OR = 10, IF = 11, ELSE = 12, WHILE = 13, 
    RETURN = 14, PUBLIC = 15, PRIVATE = 16, PROTECTED = 17, CLASS = 18, 
    INT = 19, BOOL = 20, VOID = 21, STRING = 22, STRING_LITERAL = 23, BOOLEAN_LITERAL = 24, 
    INTEGER_LITERAL = 25, IDENTIFIER = 26, WHITESPACE = 27, COLON = 28, 
    INCREMENT = 29, DECREMENT = 30, PLUS_ASSIGN = 31, MINUS_ASSIGN = 32, 
    STAR_ASSIGN = 33, DIV_ASSIGN = 34, MOD_ASSIGN = 35, STAR = 36, AMP = 37, 
    FOR = 38, AUTO = 39, PLUS = 40, MINUS = 41, DIV = 42, MOD = 43, EQ = 44, 
    NEQ = 45, LT = 46, GT = 47, LE = 48, GE = 49, SELECTOR = 50, CONTINUE = 51, 
    BREAK = 52, PTR = 53, ESC = 54
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

