
// Generated from C3pp.g4 by ANTLR 4.13.2


#include "C3ppListener.h"
#include "C3ppVisitor.h"

#include "C3ppParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct C3ppParserStaticData final {
  C3ppParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  C3ppParserStaticData(const C3ppParserStaticData&) = delete;
  C3ppParserStaticData(C3ppParserStaticData&&) = delete;
  C3ppParserStaticData& operator=(const C3ppParserStaticData&) = delete;
  C3ppParserStaticData& operator=(C3ppParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag c3ppParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<C3ppParserStaticData> c3ppParserStaticData = nullptr;

void c3ppParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (c3ppParserStaticData != nullptr) {
    return;
  }
#else
  assert(c3ppParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<C3ppParserStaticData>(
    std::vector<std::string>{
      "program", "class_declaration", "class_member", "method_declaration", 
      "field_declaration", "parameter_list", "parameter", "type", "access_modifier", 
      "block", "statement", "assignment_statement", "if_statement", "while_statement", 
      "return_statement", "expression_statement", "expression", "binary_operator"
    },
    std::vector<std::string>{
      "", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "';'", "'='", "','", 
      "'('", "')'", "'{'", "'}'", "'not'", "'and'", "'or'", "'if'", "'else'", 
      "'while'", "'return'", "'public'", "'private'", "'protected'", "'class'", 
      "'int'", "'bool'", "'void'", "'string'", "", "", "", "", "", "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "SEMI", "ASSIGN", "COMMA", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "NOT", "AND", "OR", "IF", "ELSE", "WHILE", "RETURN", 
      "PUBLIC", "PRIVATE", "PROTECTED", "CLASS", "INT", "BOOL", "VOID", 
      "STRING", "STRING_LITERAL", "BOOLEAN_LITERAL", "INT_LITERAL", "IDENTIFIER", 
      "WHITESPACE", "COLON", "ESC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,158,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,1,
  	1,1,1,1,1,1,5,1,47,8,1,10,1,12,1,50,9,1,1,1,1,1,1,2,1,2,1,2,3,2,57,8,
  	2,1,3,1,3,1,3,1,3,3,3,63,8,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	5,5,75,8,5,10,5,12,5,78,9,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,3,8,89,
  	8,8,1,9,1,9,5,9,93,8,9,10,9,12,9,96,9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,3,10,105,8,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,3,12,119,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,3,14,129,
  	8,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,3,16,145,8,16,1,16,1,16,1,16,1,16,5,16,151,8,16,10,16,12,16,154,
  	9,16,1,17,1,17,1,17,0,1,32,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,0,2,1,0,25,28,2,0,1,6,15,16,158,0,39,1,0,0,0,2,42,1,0,0,0,4,
  	56,1,0,0,0,6,58,1,0,0,0,8,67,1,0,0,0,10,71,1,0,0,0,12,79,1,0,0,0,14,82,
  	1,0,0,0,16,88,1,0,0,0,18,90,1,0,0,0,20,104,1,0,0,0,22,106,1,0,0,0,24,
  	111,1,0,0,0,26,120,1,0,0,0,28,126,1,0,0,0,30,132,1,0,0,0,32,144,1,0,0,
  	0,34,155,1,0,0,0,36,38,3,2,1,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,
  	0,0,39,40,1,0,0,0,40,1,1,0,0,0,41,39,1,0,0,0,42,43,5,24,0,0,43,44,5,32,
  	0,0,44,48,5,12,0,0,45,47,3,4,2,0,46,45,1,0,0,0,47,50,1,0,0,0,48,46,1,
  	0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,50,48,1,0,0,0,51,52,5,13,0,0,52,3,1,
  	0,0,0,53,57,3,6,3,0,54,57,3,8,4,0,55,57,3,16,8,0,56,53,1,0,0,0,56,54,
  	1,0,0,0,56,55,1,0,0,0,57,5,1,0,0,0,58,59,3,14,7,0,59,60,5,32,0,0,60,62,
  	5,10,0,0,61,63,3,10,5,0,62,61,1,0,0,0,62,63,1,0,0,0,63,64,1,0,0,0,64,
  	65,5,11,0,0,65,66,3,18,9,0,66,7,1,0,0,0,67,68,3,14,7,0,68,69,5,32,0,0,
  	69,70,5,7,0,0,70,9,1,0,0,0,71,76,3,12,6,0,72,73,5,9,0,0,73,75,3,12,6,
  	0,74,72,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,11,1,0,0,
  	0,78,76,1,0,0,0,79,80,3,14,7,0,80,81,5,32,0,0,81,13,1,0,0,0,82,83,7,0,
  	0,0,83,15,1,0,0,0,84,85,5,21,0,0,85,89,5,34,0,0,86,87,5,22,0,0,87,89,
  	5,34,0,0,88,84,1,0,0,0,88,86,1,0,0,0,89,17,1,0,0,0,90,94,5,12,0,0,91,
  	93,3,20,10,0,92,91,1,0,0,0,93,96,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,
  	95,97,1,0,0,0,96,94,1,0,0,0,97,98,5,13,0,0,98,19,1,0,0,0,99,105,3,22,
  	11,0,100,105,3,24,12,0,101,105,3,26,13,0,102,105,3,28,14,0,103,105,3,
  	30,15,0,104,99,1,0,0,0,104,100,1,0,0,0,104,101,1,0,0,0,104,102,1,0,0,
  	0,104,103,1,0,0,0,105,21,1,0,0,0,106,107,5,32,0,0,107,108,5,8,0,0,108,
  	109,3,32,16,0,109,110,5,7,0,0,110,23,1,0,0,0,111,112,5,17,0,0,112,113,
  	5,10,0,0,113,114,3,32,16,0,114,115,5,11,0,0,115,118,3,18,9,0,116,117,
  	5,18,0,0,117,119,3,18,9,0,118,116,1,0,0,0,118,119,1,0,0,0,119,25,1,0,
  	0,0,120,121,5,19,0,0,121,122,5,10,0,0,122,123,3,32,16,0,123,124,5,11,
  	0,0,124,125,3,18,9,0,125,27,1,0,0,0,126,128,5,20,0,0,127,129,3,32,16,
  	0,128,127,1,0,0,0,128,129,1,0,0,0,129,130,1,0,0,0,130,131,5,7,0,0,131,
  	29,1,0,0,0,132,133,3,32,16,0,133,134,5,7,0,0,134,31,1,0,0,0,135,136,6,
  	16,-1,0,136,145,5,32,0,0,137,145,5,31,0,0,138,145,5,30,0,0,139,145,5,
  	29,0,0,140,141,5,10,0,0,141,142,3,32,16,0,142,143,5,11,0,0,143,145,1,
  	0,0,0,144,135,1,0,0,0,144,137,1,0,0,0,144,138,1,0,0,0,144,139,1,0,0,0,
  	144,140,1,0,0,0,145,152,1,0,0,0,146,147,10,1,0,0,147,148,3,34,17,0,148,
  	149,3,32,16,2,149,151,1,0,0,0,150,146,1,0,0,0,151,154,1,0,0,0,152,150,
  	1,0,0,0,152,153,1,0,0,0,153,33,1,0,0,0,154,152,1,0,0,0,155,156,7,1,0,
  	0,156,35,1,0,0,0,12,39,48,56,62,76,88,94,104,118,128,144,152
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  c3ppParserStaticData = std::move(staticData);
}

}

C3ppParser::C3ppParser(TokenStream *input) : C3ppParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

C3ppParser::C3ppParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  C3ppParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *c3ppParserStaticData->atn, c3ppParserStaticData->decisionToDFA, c3ppParserStaticData->sharedContextCache, options);
}

C3ppParser::~C3ppParser() {
  delete _interpreter;
}

const atn::ATN& C3ppParser::getATN() const {
  return *c3ppParserStaticData->atn;
}

std::string C3ppParser::getGrammarFileName() const {
  return "C3pp.g4";
}

const std::vector<std::string>& C3ppParser::getRuleNames() const {
  return c3ppParserStaticData->ruleNames;
}

const dfa::Vocabulary& C3ppParser::getVocabulary() const {
  return c3ppParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView C3ppParser::getSerializedATN() const {
  return c3ppParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

C3ppParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::Class_declarationContext *> C3ppParser::ProgramContext::class_declaration() {
  return getRuleContexts<C3ppParser::Class_declarationContext>();
}

C3ppParser::Class_declarationContext* C3ppParser::ProgramContext::class_declaration(size_t i) {
  return getRuleContext<C3ppParser::Class_declarationContext>(i);
}


size_t C3ppParser::ProgramContext::getRuleIndex() const {
  return C3ppParser::RuleProgram;
}

void C3ppParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void C3ppParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any C3ppParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ProgramContext* C3ppParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, C3ppParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::CLASS) {
      setState(36);
      class_declaration();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_declarationContext ------------------------------------------------------------------

C3ppParser::Class_declarationContext::Class_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::Class_declarationContext::CLASS() {
  return getToken(C3ppParser::CLASS, 0);
}

tree::TerminalNode* C3ppParser::Class_declarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::Class_declarationContext::LBRACE() {
  return getToken(C3ppParser::LBRACE, 0);
}

tree::TerminalNode* C3ppParser::Class_declarationContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

std::vector<C3ppParser::Class_memberContext *> C3ppParser::Class_declarationContext::class_member() {
  return getRuleContexts<C3ppParser::Class_memberContext>();
}

C3ppParser::Class_memberContext* C3ppParser::Class_declarationContext::class_member(size_t i) {
  return getRuleContext<C3ppParser::Class_memberContext>(i);
}


size_t C3ppParser::Class_declarationContext::getRuleIndex() const {
  return C3ppParser::RuleClass_declaration;
}

void C3ppParser::Class_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_declaration(this);
}

void C3ppParser::Class_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_declaration(this);
}


std::any C3ppParser::Class_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClass_declaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Class_declarationContext* C3ppParser::class_declaration() {
  Class_declarationContext *_localctx = _tracker.createInstance<Class_declarationContext>(_ctx, getState());
  enterRule(_localctx, 2, C3ppParser::RuleClass_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(C3ppParser::CLASS);
    setState(43);
    match(C3ppParser::IDENTIFIER);
    setState(44);
    match(C3ppParser::LBRACE);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 509607936) != 0)) {
      setState(45);
      class_member();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    match(C3ppParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_memberContext ------------------------------------------------------------------

C3ppParser::Class_memberContext::Class_memberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::Method_declarationContext* C3ppParser::Class_memberContext::method_declaration() {
  return getRuleContext<C3ppParser::Method_declarationContext>(0);
}

C3ppParser::Field_declarationContext* C3ppParser::Class_memberContext::field_declaration() {
  return getRuleContext<C3ppParser::Field_declarationContext>(0);
}

C3ppParser::Access_modifierContext* C3ppParser::Class_memberContext::access_modifier() {
  return getRuleContext<C3ppParser::Access_modifierContext>(0);
}


size_t C3ppParser::Class_memberContext::getRuleIndex() const {
  return C3ppParser::RuleClass_member;
}

void C3ppParser::Class_memberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member(this);
}

void C3ppParser::Class_memberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member(this);
}


std::any C3ppParser::Class_memberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClass_member(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Class_memberContext* C3ppParser::class_member() {
  Class_memberContext *_localctx = _tracker.createInstance<Class_memberContext>(_ctx, getState());
  enterRule(_localctx, 4, C3ppParser::RuleClass_member);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      method_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      field_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
      access_modifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_declarationContext ------------------------------------------------------------------

C3ppParser::Method_declarationContext::Method_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::Method_declarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::Method_declarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::Method_declarationContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::Method_declarationContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::Method_declarationContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::Parameter_listContext* C3ppParser::Method_declarationContext::parameter_list() {
  return getRuleContext<C3ppParser::Parameter_listContext>(0);
}


size_t C3ppParser::Method_declarationContext::getRuleIndex() const {
  return C3ppParser::RuleMethod_declaration;
}

void C3ppParser::Method_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_declaration(this);
}

void C3ppParser::Method_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_declaration(this);
}


std::any C3ppParser::Method_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitMethod_declaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Method_declarationContext* C3ppParser::method_declaration() {
  Method_declarationContext *_localctx = _tracker.createInstance<Method_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, C3ppParser::RuleMethod_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    type();
    setState(59);
    match(C3ppParser::IDENTIFIER);
    setState(60);
    match(C3ppParser::LPAREN);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503316480) != 0)) {
      setState(61);
      parameter_list();
    }
    setState(64);
    match(C3ppParser::RPAREN);
    setState(65);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_declarationContext ------------------------------------------------------------------

C3ppParser::Field_declarationContext::Field_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::Field_declarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::Field_declarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::Field_declarationContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::Field_declarationContext::getRuleIndex() const {
  return C3ppParser::RuleField_declaration;
}

void C3ppParser::Field_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_declaration(this);
}

void C3ppParser::Field_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_declaration(this);
}


std::any C3ppParser::Field_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitField_declaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Field_declarationContext* C3ppParser::field_declaration() {
  Field_declarationContext *_localctx = _tracker.createInstance<Field_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, C3ppParser::RuleField_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    type();
    setState(68);
    match(C3ppParser::IDENTIFIER);
    setState(69);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

C3ppParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::ParameterContext *> C3ppParser::Parameter_listContext::parameter() {
  return getRuleContexts<C3ppParser::ParameterContext>();
}

C3ppParser::ParameterContext* C3ppParser::Parameter_listContext::parameter(size_t i) {
  return getRuleContext<C3ppParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::Parameter_listContext::COMMA() {
  return getTokens(C3ppParser::COMMA);
}

tree::TerminalNode* C3ppParser::Parameter_listContext::COMMA(size_t i) {
  return getToken(C3ppParser::COMMA, i);
}


size_t C3ppParser::Parameter_listContext::getRuleIndex() const {
  return C3ppParser::RuleParameter_list;
}

void C3ppParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void C3ppParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


std::any C3ppParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Parameter_listContext* C3ppParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 10, C3ppParser::RuleParameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    parameter();
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(72);
      match(C3ppParser::COMMA);
      setState(73);
      parameter();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

C3ppParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::ParameterContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::ParameterContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}


size_t C3ppParser::ParameterContext::getRuleIndex() const {
  return C3ppParser::RuleParameter;
}

void C3ppParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void C3ppParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any C3ppParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ParameterContext* C3ppParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 12, C3ppParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    type();
    setState(80);
    match(C3ppParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

C3ppParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::TypeContext::INT() {
  return getToken(C3ppParser::INT, 0);
}

tree::TerminalNode* C3ppParser::TypeContext::BOOL() {
  return getToken(C3ppParser::BOOL, 0);
}

tree::TerminalNode* C3ppParser::TypeContext::VOID() {
  return getToken(C3ppParser::VOID, 0);
}

tree::TerminalNode* C3ppParser::TypeContext::STRING() {
  return getToken(C3ppParser::STRING, 0);
}


size_t C3ppParser::TypeContext::getRuleIndex() const {
  return C3ppParser::RuleType;
}

void C3ppParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void C3ppParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any C3ppParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::TypeContext* C3ppParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 14, C3ppParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503316480) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Access_modifierContext ------------------------------------------------------------------

C3ppParser::Access_modifierContext::Access_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::Access_modifierContext::PUBLIC() {
  return getToken(C3ppParser::PUBLIC, 0);
}

tree::TerminalNode* C3ppParser::Access_modifierContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}

tree::TerminalNode* C3ppParser::Access_modifierContext::PRIVATE() {
  return getToken(C3ppParser::PRIVATE, 0);
}


size_t C3ppParser::Access_modifierContext::getRuleIndex() const {
  return C3ppParser::RuleAccess_modifier;
}

void C3ppParser::Access_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccess_modifier(this);
}

void C3ppParser::Access_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccess_modifier(this);
}


std::any C3ppParser::Access_modifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAccess_modifier(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Access_modifierContext* C3ppParser::access_modifier() {
  Access_modifierContext *_localctx = _tracker.createInstance<Access_modifierContext>(_ctx, getState());
  enterRule(_localctx, 16, C3ppParser::RuleAccess_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::PUBLIC: {
        enterOuterAlt(_localctx, 1);
        setState(84);
        match(C3ppParser::PUBLIC);
        setState(85);
        match(C3ppParser::COLON);
        break;
      }

      case C3ppParser::PRIVATE: {
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(C3ppParser::PRIVATE);
        setState(87);
        match(C3ppParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

C3ppParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::BlockContext::LBRACE() {
  return getToken(C3ppParser::LBRACE, 0);
}

tree::TerminalNode* C3ppParser::BlockContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

std::vector<C3ppParser::StatementContext *> C3ppParser::BlockContext::statement() {
  return getRuleContexts<C3ppParser::StatementContext>();
}

C3ppParser::StatementContext* C3ppParser::BlockContext::statement(size_t i) {
  return getRuleContext<C3ppParser::StatementContext>(i);
}


size_t C3ppParser::BlockContext::getRuleIndex() const {
  return C3ppParser::RuleBlock;
}

void C3ppParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void C3ppParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any C3ppParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::BlockContext* C3ppParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 18, C3ppParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(C3ppParser::LBRACE);
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8054768640) != 0)) {
      setState(91);
      statement();
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    match(C3ppParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

C3ppParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::Assignment_statementContext* C3ppParser::StatementContext::assignment_statement() {
  return getRuleContext<C3ppParser::Assignment_statementContext>(0);
}

C3ppParser::If_statementContext* C3ppParser::StatementContext::if_statement() {
  return getRuleContext<C3ppParser::If_statementContext>(0);
}

C3ppParser::While_statementContext* C3ppParser::StatementContext::while_statement() {
  return getRuleContext<C3ppParser::While_statementContext>(0);
}

C3ppParser::Return_statementContext* C3ppParser::StatementContext::return_statement() {
  return getRuleContext<C3ppParser::Return_statementContext>(0);
}

C3ppParser::Expression_statementContext* C3ppParser::StatementContext::expression_statement() {
  return getRuleContext<C3ppParser::Expression_statementContext>(0);
}


size_t C3ppParser::StatementContext::getRuleIndex() const {
  return C3ppParser::RuleStatement;
}

void C3ppParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void C3ppParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any C3ppParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::StatementContext* C3ppParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, C3ppParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(101);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(102);
      return_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(103);
      expression_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_statementContext ------------------------------------------------------------------

C3ppParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::Assignment_statementContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::Assignment_statementContext::ASSIGN() {
  return getToken(C3ppParser::ASSIGN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::Assignment_statementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::Assignment_statementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::Assignment_statementContext::getRuleIndex() const {
  return C3ppParser::RuleAssignment_statement;
}

void C3ppParser::Assignment_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_statement(this);
}

void C3ppParser::Assignment_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_statement(this);
}


std::any C3ppParser::Assignment_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAssignment_statement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Assignment_statementContext* C3ppParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, C3ppParser::RuleAssignment_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(C3ppParser::IDENTIFIER);
    setState(107);
    match(C3ppParser::ASSIGN);
    setState(108);
    expression(0);
    setState(109);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

C3ppParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::If_statementContext::IF() {
  return getToken(C3ppParser::IF, 0);
}

tree::TerminalNode* C3ppParser::If_statementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::If_statementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::If_statementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

std::vector<C3ppParser::BlockContext *> C3ppParser::If_statementContext::block() {
  return getRuleContexts<C3ppParser::BlockContext>();
}

C3ppParser::BlockContext* C3ppParser::If_statementContext::block(size_t i) {
  return getRuleContext<C3ppParser::BlockContext>(i);
}

tree::TerminalNode* C3ppParser::If_statementContext::ELSE() {
  return getToken(C3ppParser::ELSE, 0);
}


size_t C3ppParser::If_statementContext::getRuleIndex() const {
  return C3ppParser::RuleIf_statement;
}

void C3ppParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void C3ppParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any C3ppParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::If_statementContext* C3ppParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, C3ppParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(C3ppParser::IF);
    setState(112);
    match(C3ppParser::LPAREN);
    setState(113);
    expression(0);
    setState(114);
    match(C3ppParser::RPAREN);
    setState(115);
    block();
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ELSE) {
      setState(116);
      match(C3ppParser::ELSE);
      setState(117);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

C3ppParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::While_statementContext::WHILE() {
  return getToken(C3ppParser::WHILE, 0);
}

tree::TerminalNode* C3ppParser::While_statementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::While_statementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::While_statementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::While_statementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}


size_t C3ppParser::While_statementContext::getRuleIndex() const {
  return C3ppParser::RuleWhile_statement;
}

void C3ppParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void C3ppParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


std::any C3ppParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::While_statementContext* C3ppParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, C3ppParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(C3ppParser::WHILE);
    setState(121);
    match(C3ppParser::LPAREN);
    setState(122);
    expression(0);
    setState(123);
    match(C3ppParser::RPAREN);
    setState(124);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

C3ppParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::Return_statementContext::RETURN() {
  return getToken(C3ppParser::RETURN, 0);
}

tree::TerminalNode* C3ppParser::Return_statementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}

C3ppParser::ExpressionContext* C3ppParser::Return_statementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}


size_t C3ppParser::Return_statementContext::getRuleIndex() const {
  return C3ppParser::RuleReturn_statement;
}

void C3ppParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void C3ppParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


std::any C3ppParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Return_statementContext* C3ppParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, C3ppParser::RuleReturn_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(C3ppParser::RETURN);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8053064704) != 0)) {
      setState(127);
      expression(0);
    }
    setState(130);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

C3ppParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::ExpressionContext* C3ppParser::Expression_statementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::Expression_statementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::Expression_statementContext::getRuleIndex() const {
  return C3ppParser::RuleExpression_statement;
}

void C3ppParser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void C3ppParser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}


std::any C3ppParser::Expression_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitExpression_statement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Expression_statementContext* C3ppParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, C3ppParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    expression(0);
    setState(133);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

C3ppParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ExpressionContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::INT_LITERAL() {
  return getToken(C3ppParser::INT_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::BOOLEAN_LITERAL() {
  return getToken(C3ppParser::BOOLEAN_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::STRING_LITERAL() {
  return getToken(C3ppParser::STRING_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ExpressionContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

tree::TerminalNode* C3ppParser::ExpressionContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::Binary_operatorContext* C3ppParser::ExpressionContext::binary_operator() {
  return getRuleContext<C3ppParser::Binary_operatorContext>(0);
}


size_t C3ppParser::ExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleExpression;
}

void C3ppParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void C3ppParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any C3ppParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


C3ppParser::ExpressionContext* C3ppParser::expression() {
   return expression(0);
}

C3ppParser::ExpressionContext* C3ppParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C3ppParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  C3ppParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, C3ppParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::IDENTIFIER: {
        setState(136);
        match(C3ppParser::IDENTIFIER);
        break;
      }

      case C3ppParser::INT_LITERAL: {
        setState(137);
        match(C3ppParser::INT_LITERAL);
        break;
      }

      case C3ppParser::BOOLEAN_LITERAL: {
        setState(138);
        match(C3ppParser::BOOLEAN_LITERAL);
        break;
      }

      case C3ppParser::STRING_LITERAL: {
        setState(139);
        match(C3ppParser::STRING_LITERAL);
        break;
      }

      case C3ppParser::LPAREN: {
        setState(140);
        match(C3ppParser::LPAREN);
        setState(141);
        expression(0);
        setState(142);
        match(C3ppParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(152);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(146);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(147);
        binary_operator();
        setState(148);
        expression(2); 
      }
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Binary_operatorContext ------------------------------------------------------------------

C3ppParser::Binary_operatorContext::Binary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::Binary_operatorContext::AND() {
  return getToken(C3ppParser::AND, 0);
}

tree::TerminalNode* C3ppParser::Binary_operatorContext::OR() {
  return getToken(C3ppParser::OR, 0);
}


size_t C3ppParser::Binary_operatorContext::getRuleIndex() const {
  return C3ppParser::RuleBinary_operator;
}

void C3ppParser::Binary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_operator(this);
}

void C3ppParser::Binary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_operator(this);
}


std::any C3ppParser::Binary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBinary_operator(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::Binary_operatorContext* C3ppParser::binary_operator() {
  Binary_operatorContext *_localctx = _tracker.createInstance<Binary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 34, C3ppParser::RuleBinary_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 98430) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool C3ppParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C3ppParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void C3ppParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c3ppParserInitialize();
#else
  ::antlr4::internal::call_once(c3ppParserOnceFlag, c3ppParserInitialize);
#endif
}
