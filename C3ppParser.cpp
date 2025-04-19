
// Generated from C3pp.g4 by ANTLR 4.13.2


#include "C3ppListener.h"

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
      "program", "classDeclaration", "classBody", "constructorDeclaration", 
      "fieldDeclaration", "methodDeclaration", "methodBody", "functionDeclaration", 
      "variableDeclaration", "parameterList", "parameter", "type", "block", 
      "statement", "expressionStatement", "returnStatement", "expression", 
      "assignment", "equality", "comparison", "addition", "multiplication", 
      "unary", "primary"
    },
    std::vector<std::string>{
      "", "'class'", "'int'", "'float'", "'bool'", "'if'", "'else'", "'return'", 
      "'true'", "'false'", "'void'", "'='", "'+'", "'-'", "'*'", "'/'", 
      "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'!'", "'('", "')'", 
      "'{'", "'}'", "','", "';'"
    },
    std::vector<std::string>{
      "", "CLASS", "INT", "FLOAT", "BOOL", "IF", "ELSE", "RETURN", "TRUE", 
      "FALSE", "VOID", "ASSIGN", "ADD", "SUB", "MUL", "DIV", "EQ", "NEQ", 
      "LT", "GT", "LE", "GE", "NOT", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
      "COMMA", "SEMI", "INT_LITERAL", "FLOAT_LITERAL", "BOOL_LITERAL", "IDENTIFIER", 
      "WS", "LINE_COMMENT", "BLOCK_COMMENT", "Identifier"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,222,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,5,0,52,8,0,10,0,12,0,55,9,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,5,1,63,8,1,10,1,12,1,66,9,1,1,1,1,1,1,2,1,2,4,2,72,
  	8,2,11,2,12,2,73,1,3,1,3,1,3,3,3,79,8,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,3,5,92,8,5,1,5,1,5,1,5,1,6,1,6,5,6,99,8,6,10,6,12,6,102,
  	9,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,110,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,3,
  	8,119,8,8,1,8,1,8,1,9,1,9,1,9,5,9,126,8,9,10,9,12,9,129,9,9,1,10,1,10,
  	1,10,1,11,1,11,1,12,1,12,5,12,138,8,12,10,12,12,12,141,9,12,1,12,1,12,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,156,8,13,
  	1,14,1,14,1,14,1,15,1,15,3,15,163,8,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,17,1,17,3,17,173,8,17,1,18,1,18,1,18,5,18,178,8,18,10,18,12,18,181,
  	9,18,1,19,1,19,1,19,5,19,186,8,19,10,19,12,19,189,9,19,1,20,1,20,1,20,
  	5,20,194,8,20,10,20,12,20,197,9,20,1,21,1,21,1,21,5,21,202,8,21,10,21,
  	12,21,205,9,21,1,22,1,22,1,22,3,22,210,8,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,3,23,220,8,23,1,23,0,0,24,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,0,6,2,0,2,4,36,36,1,0,16,17,1,
  	0,18,21,1,0,12,13,1,0,14,15,2,0,13,13,22,22,225,0,53,1,0,0,0,2,58,1,0,
  	0,0,4,71,1,0,0,0,6,75,1,0,0,0,8,83,1,0,0,0,10,87,1,0,0,0,12,96,1,0,0,
  	0,14,105,1,0,0,0,16,114,1,0,0,0,18,122,1,0,0,0,20,130,1,0,0,0,22,133,
  	1,0,0,0,24,135,1,0,0,0,26,155,1,0,0,0,28,157,1,0,0,0,30,160,1,0,0,0,32,
  	166,1,0,0,0,34,172,1,0,0,0,36,174,1,0,0,0,38,182,1,0,0,0,40,190,1,0,0,
  	0,42,198,1,0,0,0,44,209,1,0,0,0,46,219,1,0,0,0,48,52,3,2,1,0,49,52,3,
  	14,7,0,50,52,3,16,8,0,51,48,1,0,0,0,51,49,1,0,0,0,51,50,1,0,0,0,52,55,
  	1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,0,55,53,1,0,0,0,56,57,
  	5,0,0,1,57,1,1,0,0,0,58,59,5,1,0,0,59,60,5,32,0,0,60,64,5,25,0,0,61,63,
  	3,4,2,0,62,61,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,67,
  	1,0,0,0,66,64,1,0,0,0,67,68,5,26,0,0,68,3,1,0,0,0,69,72,3,8,4,0,70,72,
  	3,10,5,0,71,69,1,0,0,0,71,70,1,0,0,0,72,73,1,0,0,0,73,71,1,0,0,0,73,74,
  	1,0,0,0,74,5,1,0,0,0,75,76,5,36,0,0,76,78,5,23,0,0,77,79,3,18,9,0,78,
  	77,1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,80,81,5,24,0,0,81,82,3,24,12,0,
  	82,7,1,0,0,0,83,84,3,22,11,0,84,85,5,32,0,0,85,86,5,28,0,0,86,9,1,0,0,
  	0,87,88,3,22,11,0,88,89,5,32,0,0,89,91,5,23,0,0,90,92,3,18,9,0,91,90,
  	1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,94,5,24,0,0,94,95,3,12,6,0,95,
  	11,1,0,0,0,96,100,5,25,0,0,97,99,3,26,13,0,98,97,1,0,0,0,99,102,1,0,0,
  	0,100,98,1,0,0,0,100,101,1,0,0,0,101,103,1,0,0,0,102,100,1,0,0,0,103,
  	104,5,26,0,0,104,13,1,0,0,0,105,106,3,22,11,0,106,107,5,36,0,0,107,109,
  	5,23,0,0,108,110,3,18,9,0,109,108,1,0,0,0,109,110,1,0,0,0,110,111,1,0,
  	0,0,111,112,5,24,0,0,112,113,3,24,12,0,113,15,1,0,0,0,114,115,3,22,11,
  	0,115,118,5,36,0,0,116,117,5,11,0,0,117,119,3,32,16,0,118,116,1,0,0,0,
  	118,119,1,0,0,0,119,120,1,0,0,0,120,121,5,28,0,0,121,17,1,0,0,0,122,127,
  	3,20,10,0,123,124,5,27,0,0,124,126,3,20,10,0,125,123,1,0,0,0,126,129,
  	1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,19,1,0,0,0,129,127,1,0,0,
  	0,130,131,3,22,11,0,131,132,5,36,0,0,132,21,1,0,0,0,133,134,7,0,0,0,134,
  	23,1,0,0,0,135,139,5,25,0,0,136,138,3,26,13,0,137,136,1,0,0,0,138,141,
  	1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,142,1,0,0,0,141,139,1,0,0,
  	0,142,143,5,26,0,0,143,25,1,0,0,0,144,156,3,24,12,0,145,146,3,16,8,0,
  	146,147,5,28,0,0,147,156,1,0,0,0,148,149,3,34,17,0,149,150,5,28,0,0,150,
  	156,1,0,0,0,151,152,3,28,14,0,152,153,5,28,0,0,153,156,1,0,0,0,154,156,
  	3,30,15,0,155,144,1,0,0,0,155,145,1,0,0,0,155,148,1,0,0,0,155,151,1,0,
  	0,0,155,154,1,0,0,0,156,27,1,0,0,0,157,158,3,32,16,0,158,159,5,28,0,0,
  	159,29,1,0,0,0,160,162,5,7,0,0,161,163,3,32,16,0,162,161,1,0,0,0,162,
  	163,1,0,0,0,163,164,1,0,0,0,164,165,5,28,0,0,165,31,1,0,0,0,166,167,3,
  	34,17,0,167,33,1,0,0,0,168,169,5,36,0,0,169,170,5,11,0,0,170,173,3,32,
  	16,0,171,173,3,36,18,0,172,168,1,0,0,0,172,171,1,0,0,0,173,35,1,0,0,0,
  	174,179,3,38,19,0,175,176,7,1,0,0,176,178,3,38,19,0,177,175,1,0,0,0,178,
  	181,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,37,1,0,0,0,181,179,1,
  	0,0,0,182,187,3,40,20,0,183,184,7,2,0,0,184,186,3,40,20,0,185,183,1,0,
  	0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,39,1,0,0,0,189,
  	187,1,0,0,0,190,195,3,42,21,0,191,192,7,3,0,0,192,194,3,42,21,0,193,191,
  	1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,41,1,0,0,
  	0,197,195,1,0,0,0,198,203,3,44,22,0,199,200,7,4,0,0,200,202,3,44,22,0,
  	201,199,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,43,
  	1,0,0,0,205,203,1,0,0,0,206,207,7,5,0,0,207,210,3,44,22,0,208,210,3,46,
  	23,0,209,206,1,0,0,0,209,208,1,0,0,0,210,45,1,0,0,0,211,220,5,29,0,0,
  	212,220,5,30,0,0,213,220,5,31,0,0,214,220,5,36,0,0,215,216,5,23,0,0,216,
  	217,3,32,16,0,217,218,5,24,0,0,218,220,1,0,0,0,219,211,1,0,0,0,219,212,
  	1,0,0,0,219,213,1,0,0,0,219,214,1,0,0,0,219,215,1,0,0,0,220,47,1,0,0,
  	0,21,51,53,64,71,73,78,91,100,109,118,127,139,155,162,172,179,187,195,
  	203,209,219
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

tree::TerminalNode* C3ppParser::ProgramContext::EOF() {
  return getToken(C3ppParser::EOF, 0);
}

std::vector<C3ppParser::ClassDeclarationContext *> C3ppParser::ProgramContext::classDeclaration() {
  return getRuleContexts<C3ppParser::ClassDeclarationContext>();
}

C3ppParser::ClassDeclarationContext* C3ppParser::ProgramContext::classDeclaration(size_t i) {
  return getRuleContext<C3ppParser::ClassDeclarationContext>(i);
}

std::vector<C3ppParser::FunctionDeclarationContext *> C3ppParser::ProgramContext::functionDeclaration() {
  return getRuleContexts<C3ppParser::FunctionDeclarationContext>();
}

C3ppParser::FunctionDeclarationContext* C3ppParser::ProgramContext::functionDeclaration(size_t i) {
  return getRuleContext<C3ppParser::FunctionDeclarationContext>(i);
}

std::vector<C3ppParser::VariableDeclarationContext *> C3ppParser::ProgramContext::variableDeclaration() {
  return getRuleContexts<C3ppParser::VariableDeclarationContext>();
}

C3ppParser::VariableDeclarationContext* C3ppParser::ProgramContext::variableDeclaration(size_t i) {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(i);
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
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476766) != 0)) {
      setState(51);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(48);
        classDeclaration();
        break;
      }

      case 2: {
        setState(49);
        functionDeclaration();
        break;
      }

      case 3: {
        setState(50);
        variableDeclaration();
        break;
      }

      default:
        break;
      }
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(56);
    match(C3ppParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

C3ppParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::CLASS() {
  return getToken(C3ppParser::CLASS, 0);
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::LBRACE() {
  return getToken(C3ppParser::LBRACE, 0);
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

std::vector<C3ppParser::ClassBodyContext *> C3ppParser::ClassDeclarationContext::classBody() {
  return getRuleContexts<C3ppParser::ClassBodyContext>();
}

C3ppParser::ClassBodyContext* C3ppParser::ClassDeclarationContext::classBody(size_t i) {
  return getRuleContext<C3ppParser::ClassBodyContext>(i);
}


size_t C3ppParser::ClassDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleClassDeclaration;
}

void C3ppParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void C3ppParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

C3ppParser::ClassDeclarationContext* C3ppParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, C3ppParser::RuleClassDeclaration);
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
    match(C3ppParser::CLASS);
    setState(59);
    match(C3ppParser::IDENTIFIER);
    setState(60);
    match(C3ppParser::LBRACE);
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476764) != 0)) {
      setState(61);
      classBody();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
    match(C3ppParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

C3ppParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::FieldDeclarationContext *> C3ppParser::ClassBodyContext::fieldDeclaration() {
  return getRuleContexts<C3ppParser::FieldDeclarationContext>();
}

C3ppParser::FieldDeclarationContext* C3ppParser::ClassBodyContext::fieldDeclaration(size_t i) {
  return getRuleContext<C3ppParser::FieldDeclarationContext>(i);
}

std::vector<C3ppParser::MethodDeclarationContext *> C3ppParser::ClassBodyContext::methodDeclaration() {
  return getRuleContexts<C3ppParser::MethodDeclarationContext>();
}

C3ppParser::MethodDeclarationContext* C3ppParser::ClassBodyContext::methodDeclaration(size_t i) {
  return getRuleContext<C3ppParser::MethodDeclarationContext>(i);
}


size_t C3ppParser::ClassBodyContext::getRuleIndex() const {
  return C3ppParser::RuleClassBody;
}

void C3ppParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void C3ppParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}

C3ppParser::ClassBodyContext* C3ppParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 4, C3ppParser::RuleClassBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(71); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(71);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
              case 1: {
                setState(69);
                fieldDeclaration();
                break;
              }

              case 2: {
                setState(70);
                methodDeclaration();
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(73); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

C3ppParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ConstructorDeclarationContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
}

tree::TerminalNode* C3ppParser::ConstructorDeclarationContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::ConstructorDeclarationContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::ConstructorDeclarationContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::ParameterListContext* C3ppParser::ConstructorDeclarationContext::parameterList() {
  return getRuleContext<C3ppParser::ParameterListContext>(0);
}


size_t C3ppParser::ConstructorDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleConstructorDeclaration;
}

void C3ppParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void C3ppParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}

C3ppParser::ConstructorDeclarationContext* C3ppParser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, C3ppParser::RuleConstructorDeclaration);
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
    setState(75);
    match(C3ppParser::Identifier);
    setState(76);
    match(C3ppParser::LPAREN);
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476764) != 0)) {
      setState(77);
      parameterList();
    }
    setState(80);
    match(C3ppParser::RPAREN);
    setState(81);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

C3ppParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::FieldDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::FieldDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::FieldDeclarationContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::FieldDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleFieldDeclaration;
}

void C3ppParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void C3ppParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}

C3ppParser::FieldDeclarationContext* C3ppParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, C3ppParser::RuleFieldDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    type();
    setState(84);
    match(C3ppParser::IDENTIFIER);
    setState(85);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

C3ppParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::MethodDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::MethodDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::MethodDeclarationContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::MethodDeclarationContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::MethodBodyContext* C3ppParser::MethodDeclarationContext::methodBody() {
  return getRuleContext<C3ppParser::MethodBodyContext>(0);
}

C3ppParser::ParameterListContext* C3ppParser::MethodDeclarationContext::parameterList() {
  return getRuleContext<C3ppParser::ParameterListContext>(0);
}


size_t C3ppParser::MethodDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleMethodDeclaration;
}

void C3ppParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void C3ppParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}

C3ppParser::MethodDeclarationContext* C3ppParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, C3ppParser::RuleMethodDeclaration);
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
    setState(87);
    type();
    setState(88);
    match(C3ppParser::IDENTIFIER);
    setState(89);
    match(C3ppParser::LPAREN);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476764) != 0)) {
      setState(90);
      parameterList();
    }
    setState(93);
    match(C3ppParser::RPAREN);
    setState(94);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

C3ppParser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::MethodBodyContext::LBRACE() {
  return getToken(C3ppParser::LBRACE, 0);
}

tree::TerminalNode* C3ppParser::MethodBodyContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

std::vector<C3ppParser::StatementContext *> C3ppParser::MethodBodyContext::statement() {
  return getRuleContexts<C3ppParser::StatementContext>();
}

C3ppParser::StatementContext* C3ppParser::MethodBodyContext::statement(size_t i) {
  return getRuleContext<C3ppParser::StatementContext>(i);
}


size_t C3ppParser::MethodBodyContext::getRuleIndex() const {
  return C3ppParser::RuleMethodBody;
}

void C3ppParser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodBody(this);
}

void C3ppParser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodBody(this);
}

C3ppParser::MethodBodyContext* C3ppParser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 12, C3ppParser::RuleMethodBody);
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
    setState(96);
    match(C3ppParser::LBRACE);
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72523718812) != 0)) {
      setState(97);
      statement();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(C3ppParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

C3ppParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::FunctionDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::FunctionDeclarationContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
}

tree::TerminalNode* C3ppParser::FunctionDeclarationContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::FunctionDeclarationContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::FunctionDeclarationContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::ParameterListContext* C3ppParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<C3ppParser::ParameterListContext>(0);
}


size_t C3ppParser::FunctionDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleFunctionDeclaration;
}

void C3ppParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void C3ppParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

C3ppParser::FunctionDeclarationContext* C3ppParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, C3ppParser::RuleFunctionDeclaration);
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
    setState(105);
    type();
    setState(106);
    match(C3ppParser::Identifier);
    setState(107);
    match(C3ppParser::LPAREN);
    setState(109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476764) != 0)) {
      setState(108);
      parameterList();
    }
    setState(111);
    match(C3ppParser::RPAREN);
    setState(112);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

C3ppParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::VariableDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::ASSIGN() {
  return getToken(C3ppParser::ASSIGN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::VariableDeclarationContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}


size_t C3ppParser::VariableDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleVariableDeclaration;
}

void C3ppParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void C3ppParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

C3ppParser::VariableDeclarationContext* C3ppParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, C3ppParser::RuleVariableDeclaration);
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
    setState(114);
    type();
    setState(115);
    match(C3ppParser::Identifier);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ASSIGN) {
      setState(116);
      match(C3ppParser::ASSIGN);
      setState(117);
      expression();
    }
    setState(120);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

C3ppParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::ParameterContext *> C3ppParser::ParameterListContext::parameter() {
  return getRuleContexts<C3ppParser::ParameterContext>();
}

C3ppParser::ParameterContext* C3ppParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<C3ppParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::ParameterListContext::COMMA() {
  return getTokens(C3ppParser::COMMA);
}

tree::TerminalNode* C3ppParser::ParameterListContext::COMMA(size_t i) {
  return getToken(C3ppParser::COMMA, i);
}


size_t C3ppParser::ParameterListContext::getRuleIndex() const {
  return C3ppParser::RuleParameterList;
}

void C3ppParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void C3ppParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

C3ppParser::ParameterListContext* C3ppParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 18, C3ppParser::RuleParameterList);
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
    setState(122);
    parameter();
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(123);
      match(C3ppParser::COMMA);
      setState(124);
      parameter();
      setState(129);
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

tree::TerminalNode* C3ppParser::ParameterContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
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

C3ppParser::ParameterContext* C3ppParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, C3ppParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    type();
    setState(131);
    match(C3ppParser::Identifier);
   
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

tree::TerminalNode* C3ppParser::TypeContext::FLOAT() {
  return getToken(C3ppParser::FLOAT, 0);
}

tree::TerminalNode* C3ppParser::TypeContext::BOOL() {
  return getToken(C3ppParser::BOOL, 0);
}

tree::TerminalNode* C3ppParser::TypeContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
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

C3ppParser::TypeContext* C3ppParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 22, C3ppParser::RuleType);
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
    setState(133);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719476764) != 0))) {
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

C3ppParser::BlockContext* C3ppParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, C3ppParser::RuleBlock);
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
    setState(135);
    match(C3ppParser::LBRACE);
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72523718812) != 0)) {
      setState(136);
      statement();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(142);
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

C3ppParser::BlockContext* C3ppParser::StatementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::VariableDeclarationContext* C3ppParser::StatementContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* C3ppParser::StatementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}

C3ppParser::AssignmentContext* C3ppParser::StatementContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
}

C3ppParser::ExpressionStatementContext* C3ppParser::StatementContext::expressionStatement() {
  return getRuleContext<C3ppParser::ExpressionStatementContext>(0);
}

C3ppParser::ReturnStatementContext* C3ppParser::StatementContext::returnStatement() {
  return getRuleContext<C3ppParser::ReturnStatementContext>(0);
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

C3ppParser::StatementContext* C3ppParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 26, C3ppParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      variableDeclaration();
      setState(146);
      match(C3ppParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(148);
      assignment();
      setState(149);
      match(C3ppParser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(151);
      expressionStatement();
      setState(152);
      match(C3ppParser::SEMI);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(154);
      returnStatement();
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

//----------------- ExpressionStatementContext ------------------------------------------------------------------

C3ppParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::ExpressionContext* C3ppParser::ExpressionStatementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::ExpressionStatementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::ExpressionStatementContext::getRuleIndex() const {
  return C3ppParser::RuleExpressionStatement;
}

void C3ppParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void C3ppParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

C3ppParser::ExpressionStatementContext* C3ppParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, C3ppParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    expression();
    setState(158);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

C3ppParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ReturnStatementContext::RETURN() {
  return getToken(C3ppParser::RETURN, 0);
}

tree::TerminalNode* C3ppParser::ReturnStatementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}

C3ppParser::ExpressionContext* C3ppParser::ReturnStatementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}


size_t C3ppParser::ReturnStatementContext::getRuleIndex() const {
  return C3ppParser::RuleReturnStatement;
}

void C3ppParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void C3ppParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

C3ppParser::ReturnStatementContext* C3ppParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, C3ppParser::RuleReturnStatement);
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
    setState(160);
    match(C3ppParser::RETURN);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72490164224) != 0)) {
      setState(161);
      expression();
    }
    setState(164);
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

C3ppParser::AssignmentContext* C3ppParser::ExpressionContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
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

C3ppParser::ExpressionContext* C3ppParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, C3ppParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

C3ppParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::AssignmentContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
}

tree::TerminalNode* C3ppParser::AssignmentContext::ASSIGN() {
  return getToken(C3ppParser::ASSIGN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::AssignmentContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

C3ppParser::EqualityContext* C3ppParser::AssignmentContext::equality() {
  return getRuleContext<C3ppParser::EqualityContext>(0);
}


size_t C3ppParser::AssignmentContext::getRuleIndex() const {
  return C3ppParser::RuleAssignment;
}

void C3ppParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void C3ppParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

C3ppParser::AssignmentContext* C3ppParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 34, C3ppParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      match(C3ppParser::Identifier);
      setState(169);
      match(C3ppParser::ASSIGN);
      setState(170);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(171);
      equality();
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

//----------------- EqualityContext ------------------------------------------------------------------

C3ppParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::ComparisonContext *> C3ppParser::EqualityContext::comparison() {
  return getRuleContexts<C3ppParser::ComparisonContext>();
}

C3ppParser::ComparisonContext* C3ppParser::EqualityContext::comparison(size_t i) {
  return getRuleContext<C3ppParser::ComparisonContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::EqualityContext::EQ() {
  return getTokens(C3ppParser::EQ);
}

tree::TerminalNode* C3ppParser::EqualityContext::EQ(size_t i) {
  return getToken(C3ppParser::EQ, i);
}

std::vector<tree::TerminalNode *> C3ppParser::EqualityContext::NEQ() {
  return getTokens(C3ppParser::NEQ);
}

tree::TerminalNode* C3ppParser::EqualityContext::NEQ(size_t i) {
  return getToken(C3ppParser::NEQ, i);
}


size_t C3ppParser::EqualityContext::getRuleIndex() const {
  return C3ppParser::RuleEquality;
}

void C3ppParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void C3ppParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}

C3ppParser::EqualityContext* C3ppParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 36, C3ppParser::RuleEquality);
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
    setState(174);
    comparison();
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::EQ

    || _la == C3ppParser::NEQ) {
      setState(175);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::EQ

      || _la == C3ppParser::NEQ)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(176);
      comparison();
      setState(181);
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

//----------------- ComparisonContext ------------------------------------------------------------------

C3ppParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::AdditionContext *> C3ppParser::ComparisonContext::addition() {
  return getRuleContexts<C3ppParser::AdditionContext>();
}

C3ppParser::AdditionContext* C3ppParser::ComparisonContext::addition(size_t i) {
  return getRuleContext<C3ppParser::AdditionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::ComparisonContext::LT() {
  return getTokens(C3ppParser::LT);
}

tree::TerminalNode* C3ppParser::ComparisonContext::LT(size_t i) {
  return getToken(C3ppParser::LT, i);
}

std::vector<tree::TerminalNode *> C3ppParser::ComparisonContext::GT() {
  return getTokens(C3ppParser::GT);
}

tree::TerminalNode* C3ppParser::ComparisonContext::GT(size_t i) {
  return getToken(C3ppParser::GT, i);
}

std::vector<tree::TerminalNode *> C3ppParser::ComparisonContext::LE() {
  return getTokens(C3ppParser::LE);
}

tree::TerminalNode* C3ppParser::ComparisonContext::LE(size_t i) {
  return getToken(C3ppParser::LE, i);
}

std::vector<tree::TerminalNode *> C3ppParser::ComparisonContext::GE() {
  return getTokens(C3ppParser::GE);
}

tree::TerminalNode* C3ppParser::ComparisonContext::GE(size_t i) {
  return getToken(C3ppParser::GE, i);
}


size_t C3ppParser::ComparisonContext::getRuleIndex() const {
  return C3ppParser::RuleComparison;
}

void C3ppParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void C3ppParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

C3ppParser::ComparisonContext* C3ppParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 38, C3ppParser::RuleComparison);
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
    setState(182);
    addition();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3932160) != 0)) {
      setState(183);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3932160) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(184);
      addition();
      setState(189);
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

//----------------- AdditionContext ------------------------------------------------------------------

C3ppParser::AdditionContext::AdditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::MultiplicationContext *> C3ppParser::AdditionContext::multiplication() {
  return getRuleContexts<C3ppParser::MultiplicationContext>();
}

C3ppParser::MultiplicationContext* C3ppParser::AdditionContext::multiplication(size_t i) {
  return getRuleContext<C3ppParser::MultiplicationContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::AdditionContext::ADD() {
  return getTokens(C3ppParser::ADD);
}

tree::TerminalNode* C3ppParser::AdditionContext::ADD(size_t i) {
  return getToken(C3ppParser::ADD, i);
}

std::vector<tree::TerminalNode *> C3ppParser::AdditionContext::SUB() {
  return getTokens(C3ppParser::SUB);
}

tree::TerminalNode* C3ppParser::AdditionContext::SUB(size_t i) {
  return getToken(C3ppParser::SUB, i);
}


size_t C3ppParser::AdditionContext::getRuleIndex() const {
  return C3ppParser::RuleAddition;
}

void C3ppParser::AdditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddition(this);
}

void C3ppParser::AdditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddition(this);
}

C3ppParser::AdditionContext* C3ppParser::addition() {
  AdditionContext *_localctx = _tracker.createInstance<AdditionContext>(_ctx, getState());
  enterRule(_localctx, 40, C3ppParser::RuleAddition);
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
    setState(190);
    multiplication();
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::ADD

    || _la == C3ppParser::SUB) {
      setState(191);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::ADD

      || _la == C3ppParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(192);
      multiplication();
      setState(197);
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

//----------------- MultiplicationContext ------------------------------------------------------------------

C3ppParser::MultiplicationContext::MultiplicationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::UnaryContext *> C3ppParser::MultiplicationContext::unary() {
  return getRuleContexts<C3ppParser::UnaryContext>();
}

C3ppParser::UnaryContext* C3ppParser::MultiplicationContext::unary(size_t i) {
  return getRuleContext<C3ppParser::UnaryContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::MultiplicationContext::MUL() {
  return getTokens(C3ppParser::MUL);
}

tree::TerminalNode* C3ppParser::MultiplicationContext::MUL(size_t i) {
  return getToken(C3ppParser::MUL, i);
}

std::vector<tree::TerminalNode *> C3ppParser::MultiplicationContext::DIV() {
  return getTokens(C3ppParser::DIV);
}

tree::TerminalNode* C3ppParser::MultiplicationContext::DIV(size_t i) {
  return getToken(C3ppParser::DIV, i);
}


size_t C3ppParser::MultiplicationContext::getRuleIndex() const {
  return C3ppParser::RuleMultiplication;
}

void C3ppParser::MultiplicationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplication(this);
}

void C3ppParser::MultiplicationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplication(this);
}

C3ppParser::MultiplicationContext* C3ppParser::multiplication() {
  MultiplicationContext *_localctx = _tracker.createInstance<MultiplicationContext>(_ctx, getState());
  enterRule(_localctx, 42, C3ppParser::RuleMultiplication);
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
    setState(198);
    unary();
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::MUL

    || _la == C3ppParser::DIV) {
      setState(199);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::MUL

      || _la == C3ppParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(200);
      unary();
      setState(205);
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

//----------------- UnaryContext ------------------------------------------------------------------

C3ppParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::UnaryContext* C3ppParser::UnaryContext::unary() {
  return getRuleContext<C3ppParser::UnaryContext>(0);
}

tree::TerminalNode* C3ppParser::UnaryContext::SUB() {
  return getToken(C3ppParser::SUB, 0);
}

tree::TerminalNode* C3ppParser::UnaryContext::NOT() {
  return getToken(C3ppParser::NOT, 0);
}

C3ppParser::PrimaryContext* C3ppParser::UnaryContext::primary() {
  return getRuleContext<C3ppParser::PrimaryContext>(0);
}


size_t C3ppParser::UnaryContext::getRuleIndex() const {
  return C3ppParser::RuleUnary;
}

void C3ppParser::UnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary(this);
}

void C3ppParser::UnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary(this);
}

C3ppParser::UnaryContext* C3ppParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 44, C3ppParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::SUB:
      case C3ppParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(206);
        _la = _input->LA(1);
        if (!(_la == C3ppParser::SUB

        || _la == C3ppParser::NOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(207);
        unary();
        break;
      }

      case C3ppParser::LPAREN:
      case C3ppParser::INT_LITERAL:
      case C3ppParser::FLOAT_LITERAL:
      case C3ppParser::BOOL_LITERAL:
      case C3ppParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(208);
        primary();
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

//----------------- PrimaryContext ------------------------------------------------------------------

C3ppParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::PrimaryContext::INT_LITERAL() {
  return getToken(C3ppParser::INT_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::FLOAT_LITERAL() {
  return getToken(C3ppParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::BOOL_LITERAL() {
  return getToken(C3ppParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::Identifier() {
  return getToken(C3ppParser::Identifier, 0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::PrimaryContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}


size_t C3ppParser::PrimaryContext::getRuleIndex() const {
  return C3ppParser::RulePrimary;
}

void C3ppParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void C3ppParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

C3ppParser::PrimaryContext* C3ppParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 46, C3ppParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        match(C3ppParser::INT_LITERAL);
        break;
      }

      case C3ppParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(C3ppParser::FLOAT_LITERAL);
        break;
      }

      case C3ppParser::BOOL_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(213);
        match(C3ppParser::BOOL_LITERAL);
        break;
      }

      case C3ppParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(214);
        match(C3ppParser::Identifier);
        break;
      }

      case C3ppParser::LPAREN: {
        enterOuterAlt(_localctx, 5);
        setState(215);
        match(C3ppParser::LPAREN);
        setState(216);
        expression();
        setState(217);
        match(C3ppParser::RPAREN);
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

void C3ppParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c3ppParserInitialize();
#else
  ::antlr4::internal::call_once(c3ppParserOnceFlag, c3ppParserInitialize);
#endif
}
