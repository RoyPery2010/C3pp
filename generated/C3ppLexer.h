
// Generated from C3pp.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C3ppLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, SEMI = 7, 
    ASSIGN = 8, COMMA = 9, LPAREN = 10, RPAREN = 11, LBRACE = 12, RBRACE = 13, 
    NOT = 14, AND = 15, OR = 16, IF = 17, ELSE = 18, WHILE = 19, RETURN = 20, 
    PUBLIC = 21, PRIVATE = 22, PROTECTED = 23, CLASS = 24, INT = 25, BOOL = 26, 
    VOID = 27, STRING = 28, STRING_LITERAL = 29, BOOLEAN_LITERAL = 30, INT_LITERAL = 31, 
    IDENTIFIER = 32, WHITESPACE = 33, COLON = 34, ESC = 35
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

