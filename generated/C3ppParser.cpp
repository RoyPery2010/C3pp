
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
      "program", "classDeclaration", "classBody", "accessModifier", "classMember", 
      "classMemberDeclaration", "fieldDeclaration", "methodDeclaration", 
      "functionDeclaration", "arguments", "functionCall", "parameterList", 
      "parameter", "block", "statement", "variableDeclaration", "returnStatement", 
      "expressionStatement", "ifStatement", "whileStatement", "assignment", 
      "expression", "factor", "primary", "arrayInitExpression", "type", 
      "qualifiedIdentifier"
    },
    std::vector<std::string>{
      "", "'['", "']'", "'bool'", "'void'", "", "", "'&&'", "'||'", "'!'", 
      "'class'", "'return'", "'int'", "'if'", "'else'", "'while'", "';'", 
      "','", "'='", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'('", 
      "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'::'", "'std'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "LINE_COMMENT", "BLOCK_COMMENT", "AND", "OR", 
      "NOT", "CLASS", "RETURN", "INT", "IF", "ELSE", "WHILE", "SEMI", "COMMA", 
      "ASSIGN", "EQ", "NEQ", "LT", "LE", "GT", "GE", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "PLUS", "MINUS", "MULT", "DIV", "COLONCOLON", 
      "STD", "IDENTIFIER", "INT_LITERAL", "BOOLEAN_LITERAL", "WS", "PUBLIC", 
      "PRIVATE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,283,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,5,0,57,8,
  	0,10,0,12,0,60,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,5,2,73,
  	8,2,10,2,12,2,76,9,2,1,3,1,3,1,4,1,4,3,4,82,8,4,1,5,3,5,85,8,5,1,5,1,
  	5,5,5,89,8,5,10,5,12,5,92,9,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,102,
  	8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,3,8,111,8,8,1,8,1,8,1,8,1,9,1,9,1,9,5,
  	9,119,8,9,10,9,12,9,122,9,9,1,10,1,10,1,10,3,10,127,8,10,1,10,1,10,1,
  	11,1,11,1,11,5,11,134,8,11,10,11,12,11,137,9,11,1,12,1,12,1,12,1,13,1,
  	13,5,13,144,8,13,10,13,12,13,147,9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,3,14,157,8,14,1,15,1,15,1,15,1,15,3,15,163,8,15,1,15,1,15,1,16,
  	1,16,3,16,169,8,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,3,18,183,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,3,21,200,8,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,5,21,238,8,21,10,21,12,21,241,9,21,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,255,8,22,1,23,1,23,1,23,
  	3,23,260,8,23,1,24,1,24,1,24,1,24,5,24,266,8,24,10,24,12,24,269,9,24,
  	1,24,1,24,1,25,1,25,1,26,1,26,1,26,5,26,278,8,26,10,26,12,26,281,9,26,
  	1,26,0,1,42,27,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,0,2,1,0,39,40,2,0,3,4,12,12,298,0,58,1,0,0,0,2,63,
  	1,0,0,0,4,74,1,0,0,0,6,77,1,0,0,0,8,81,1,0,0,0,10,84,1,0,0,0,12,93,1,
  	0,0,0,14,97,1,0,0,0,16,106,1,0,0,0,18,115,1,0,0,0,20,123,1,0,0,0,22,130,
  	1,0,0,0,24,138,1,0,0,0,26,141,1,0,0,0,28,156,1,0,0,0,30,158,1,0,0,0,32,
  	166,1,0,0,0,34,172,1,0,0,0,36,175,1,0,0,0,38,184,1,0,0,0,40,190,1,0,0,
  	0,42,199,1,0,0,0,44,254,1,0,0,0,46,259,1,0,0,0,48,261,1,0,0,0,50,272,
  	1,0,0,0,52,274,1,0,0,0,54,57,3,2,1,0,55,57,3,16,8,0,56,54,1,0,0,0,56,
  	55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,61,1,0,0,0,60,
  	58,1,0,0,0,61,62,5,0,0,1,62,1,1,0,0,0,63,64,5,10,0,0,64,65,5,35,0,0,65,
  	66,5,27,0,0,66,67,3,4,2,0,67,68,5,28,0,0,68,69,5,16,0,0,69,3,1,0,0,0,
  	70,73,3,6,3,0,71,73,3,8,4,0,72,70,1,0,0,0,72,71,1,0,0,0,73,76,1,0,0,0,
  	74,72,1,0,0,0,74,75,1,0,0,0,75,5,1,0,0,0,76,74,1,0,0,0,77,78,7,0,0,0,
  	78,7,1,0,0,0,79,82,3,12,6,0,80,82,3,14,7,0,81,79,1,0,0,0,81,80,1,0,0,
  	0,82,9,1,0,0,0,83,85,3,6,3,0,84,83,1,0,0,0,84,85,1,0,0,0,85,90,1,0,0,
  	0,86,89,3,14,7,0,87,89,3,12,6,0,88,86,1,0,0,0,88,87,1,0,0,0,89,92,1,0,
  	0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,11,1,0,0,0,92,90,1,0,0,0,93,94,3,50,
  	25,0,94,95,5,35,0,0,95,96,5,16,0,0,96,13,1,0,0,0,97,98,3,50,25,0,98,99,
  	5,35,0,0,99,101,5,25,0,0,100,102,3,24,12,0,101,100,1,0,0,0,101,102,1,
  	0,0,0,102,103,1,0,0,0,103,104,5,26,0,0,104,105,3,26,13,0,105,15,1,0,0,
  	0,106,107,3,50,25,0,107,108,5,35,0,0,108,110,5,25,0,0,109,111,3,22,11,
  	0,110,109,1,0,0,0,110,111,1,0,0,0,111,112,1,0,0,0,112,113,5,26,0,0,113,
  	114,3,26,13,0,114,17,1,0,0,0,115,120,3,42,21,0,116,117,5,17,0,0,117,119,
  	3,42,21,0,118,116,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,
  	0,0,121,19,1,0,0,0,122,120,1,0,0,0,123,124,3,52,26,0,124,126,5,25,0,0,
  	125,127,3,18,9,0,126,125,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,
  	129,5,26,0,0,129,21,1,0,0,0,130,135,3,24,12,0,131,132,5,17,0,0,132,134,
  	3,24,12,0,133,131,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,0,135,136,1,0,
  	0,0,136,23,1,0,0,0,137,135,1,0,0,0,138,139,3,50,25,0,139,140,5,35,0,0,
  	140,25,1,0,0,0,141,145,5,27,0,0,142,144,3,28,14,0,143,142,1,0,0,0,144,
  	147,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,148,1,0,0,0,147,145,1,
  	0,0,0,148,149,5,28,0,0,149,27,1,0,0,0,150,157,3,30,15,0,151,157,3,32,
  	16,0,152,157,3,34,17,0,153,157,3,36,18,0,154,157,3,38,19,0,155,157,3,
  	40,20,0,156,150,1,0,0,0,156,151,1,0,0,0,156,152,1,0,0,0,156,153,1,0,0,
  	0,156,154,1,0,0,0,156,155,1,0,0,0,157,29,1,0,0,0,158,159,3,50,25,0,159,
  	162,5,35,0,0,160,161,5,18,0,0,161,163,3,42,21,0,162,160,1,0,0,0,162,163,
  	1,0,0,0,163,164,1,0,0,0,164,165,5,16,0,0,165,31,1,0,0,0,166,168,5,11,
  	0,0,167,169,3,42,21,0,168,167,1,0,0,0,168,169,1,0,0,0,169,170,1,0,0,0,
  	170,171,5,16,0,0,171,33,1,0,0,0,172,173,3,42,21,0,173,174,5,16,0,0,174,
  	35,1,0,0,0,175,176,5,13,0,0,176,177,5,25,0,0,177,178,3,42,21,0,178,179,
  	5,26,0,0,179,182,3,26,13,0,180,181,5,14,0,0,181,183,3,26,13,0,182,180,
  	1,0,0,0,182,183,1,0,0,0,183,37,1,0,0,0,184,185,5,15,0,0,185,186,5,25,
  	0,0,186,187,3,42,21,0,187,188,5,26,0,0,188,189,3,26,13,0,189,39,1,0,0,
  	0,190,191,5,35,0,0,191,192,5,18,0,0,192,193,3,42,21,0,193,194,5,16,0,
  	0,194,41,1,0,0,0,195,196,6,21,-1,0,196,197,5,9,0,0,197,200,3,42,21,12,
  	198,200,3,46,23,0,199,195,1,0,0,0,199,198,1,0,0,0,200,239,1,0,0,0,201,
  	202,10,11,0,0,202,203,5,29,0,0,203,238,3,42,21,12,204,205,10,10,0,0,205,
  	206,5,30,0,0,206,238,3,42,21,11,207,208,10,9,0,0,208,209,5,31,0,0,209,
  	238,3,42,21,10,210,211,10,8,0,0,211,212,5,32,0,0,212,238,3,42,21,9,213,
  	214,10,7,0,0,214,215,5,19,0,0,215,238,3,42,21,8,216,217,10,6,0,0,217,
  	218,5,20,0,0,218,238,3,42,21,7,219,220,10,5,0,0,220,221,5,21,0,0,221,
  	238,3,42,21,6,222,223,10,4,0,0,223,224,5,22,0,0,224,238,3,42,21,5,225,
  	226,10,3,0,0,226,227,5,23,0,0,227,238,3,42,21,4,228,229,10,2,0,0,229,
  	230,5,24,0,0,230,238,3,42,21,3,231,232,10,14,0,0,232,233,5,7,0,0,233,
  	238,3,44,22,0,234,235,10,13,0,0,235,236,5,8,0,0,236,238,3,44,22,0,237,
  	201,1,0,0,0,237,204,1,0,0,0,237,207,1,0,0,0,237,210,1,0,0,0,237,213,1,
  	0,0,0,237,216,1,0,0,0,237,219,1,0,0,0,237,222,1,0,0,0,237,225,1,0,0,0,
  	237,228,1,0,0,0,237,231,1,0,0,0,237,234,1,0,0,0,238,241,1,0,0,0,239,237,
  	1,0,0,0,239,240,1,0,0,0,240,43,1,0,0,0,241,239,1,0,0,0,242,255,5,36,0,
  	0,243,255,5,37,0,0,244,255,5,35,0,0,245,246,5,35,0,0,246,247,5,1,0,0,
  	247,248,3,42,21,0,248,249,5,2,0,0,249,255,1,0,0,0,250,251,5,25,0,0,251,
  	252,3,42,21,0,252,253,5,26,0,0,253,255,1,0,0,0,254,242,1,0,0,0,254,243,
  	1,0,0,0,254,244,1,0,0,0,254,245,1,0,0,0,254,250,1,0,0,0,255,45,1,0,0,
  	0,256,260,5,35,0,0,257,260,5,36,0,0,258,260,3,20,10,0,259,256,1,0,0,0,
  	259,257,1,0,0,0,259,258,1,0,0,0,260,47,1,0,0,0,261,262,5,27,0,0,262,267,
  	3,42,21,0,263,264,5,17,0,0,264,266,3,42,21,0,265,263,1,0,0,0,266,269,
  	1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,270,1,0,0,0,269,267,1,0,0,
  	0,270,271,5,28,0,0,271,49,1,0,0,0,272,273,7,1,0,0,273,51,1,0,0,0,274,
  	279,5,35,0,0,275,276,5,33,0,0,276,278,5,35,0,0,277,275,1,0,0,0,278,281,
  	1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,53,1,0,0,0,281,279,1,0,0,
  	0,25,56,58,72,74,81,84,88,90,101,110,120,126,135,145,156,162,168,182,
  	199,237,239,254,259,267,279
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
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5144) != 0)) {
      setState(56);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case C3ppParser::CLASS: {
          setState(54);
          classDeclaration();
          break;
        }

        case C3ppParser::T__2:
        case C3ppParser::T__3:
        case C3ppParser::INT: {
          setState(55);
          functionDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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

C3ppParser::ClassBodyContext* C3ppParser::ClassDeclarationContext::classBody() {
  return getRuleContext<C3ppParser::ClassBodyContext>(0);
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

tree::TerminalNode* C3ppParser::ClassDeclarationContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
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


std::any C3ppParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ClassDeclarationContext* C3ppParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, C3ppParser::RuleClassDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(C3ppParser::CLASS);
    setState(64);
    match(C3ppParser::IDENTIFIER);
    setState(65);
    match(C3ppParser::LBRACE);
    setState(66);
    classBody();
    setState(67);
    match(C3ppParser::RBRACE);
    setState(68);
    match(C3ppParser::SEMI);
   
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

std::vector<C3ppParser::AccessModifierContext *> C3ppParser::ClassBodyContext::accessModifier() {
  return getRuleContexts<C3ppParser::AccessModifierContext>();
}

C3ppParser::AccessModifierContext* C3ppParser::ClassBodyContext::accessModifier(size_t i) {
  return getRuleContext<C3ppParser::AccessModifierContext>(i);
}

std::vector<C3ppParser::ClassMemberContext *> C3ppParser::ClassBodyContext::classMember() {
  return getRuleContexts<C3ppParser::ClassMemberContext>();
}

C3ppParser::ClassMemberContext* C3ppParser::ClassBodyContext::classMember(size_t i) {
  return getRuleContext<C3ppParser::ClassMemberContext>(i);
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


std::any C3ppParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ClassBodyContext* C3ppParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 4, C3ppParser::RuleClassBody);
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
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267445784) != 0)) {
      setState(72);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case C3ppParser::PUBLIC:
        case C3ppParser::PRIVATE: {
          setState(70);
          accessModifier();
          break;
        }

        case C3ppParser::T__2:
        case C3ppParser::T__3:
        case C3ppParser::INT: {
          setState(71);
          classMember();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(76);
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

//----------------- AccessModifierContext ------------------------------------------------------------------

C3ppParser::AccessModifierContext::AccessModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::AccessModifierContext::PUBLIC() {
  return getToken(C3ppParser::PUBLIC, 0);
}

tree::TerminalNode* C3ppParser::AccessModifierContext::PRIVATE() {
  return getToken(C3ppParser::PRIVATE, 0);
}


size_t C3ppParser::AccessModifierContext::getRuleIndex() const {
  return C3ppParser::RuleAccessModifier;
}

void C3ppParser::AccessModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessModifier(this);
}

void C3ppParser::AccessModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessModifier(this);
}


std::any C3ppParser::AccessModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAccessModifier(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::AccessModifierContext* C3ppParser::accessModifier() {
  AccessModifierContext *_localctx = _tracker.createInstance<AccessModifierContext>(_ctx, getState());
  enterRule(_localctx, 6, C3ppParser::RuleAccessModifier);
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
    setState(77);
    _la = _input->LA(1);
    if (!(_la == C3ppParser::PUBLIC

    || _la == C3ppParser::PRIVATE)) {
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

//----------------- ClassMemberContext ------------------------------------------------------------------

C3ppParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::FieldDeclarationContext* C3ppParser::ClassMemberContext::fieldDeclaration() {
  return getRuleContext<C3ppParser::FieldDeclarationContext>(0);
}

C3ppParser::MethodDeclarationContext* C3ppParser::ClassMemberContext::methodDeclaration() {
  return getRuleContext<C3ppParser::MethodDeclarationContext>(0);
}


size_t C3ppParser::ClassMemberContext::getRuleIndex() const {
  return C3ppParser::RuleClassMember;
}

void C3ppParser::ClassMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMember(this);
}

void C3ppParser::ClassMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMember(this);
}


std::any C3ppParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ClassMemberContext* C3ppParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 8, C3ppParser::RuleClassMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      methodDeclaration();
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

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

C3ppParser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::AccessModifierContext* C3ppParser::ClassMemberDeclarationContext::accessModifier() {
  return getRuleContext<C3ppParser::AccessModifierContext>(0);
}

std::vector<C3ppParser::MethodDeclarationContext *> C3ppParser::ClassMemberDeclarationContext::methodDeclaration() {
  return getRuleContexts<C3ppParser::MethodDeclarationContext>();
}

C3ppParser::MethodDeclarationContext* C3ppParser::ClassMemberDeclarationContext::methodDeclaration(size_t i) {
  return getRuleContext<C3ppParser::MethodDeclarationContext>(i);
}

std::vector<C3ppParser::FieldDeclarationContext *> C3ppParser::ClassMemberDeclarationContext::fieldDeclaration() {
  return getRuleContexts<C3ppParser::FieldDeclarationContext>();
}

C3ppParser::FieldDeclarationContext* C3ppParser::ClassMemberDeclarationContext::fieldDeclaration(size_t i) {
  return getRuleContext<C3ppParser::FieldDeclarationContext>(i);
}


size_t C3ppParser::ClassMemberDeclarationContext::getRuleIndex() const {
  return C3ppParser::RuleClassMemberDeclaration;
}

void C3ppParser::ClassMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclaration(this);
}

void C3ppParser::ClassMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclaration(this);
}


std::any C3ppParser::ClassMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClassMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ClassMemberDeclarationContext* C3ppParser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, C3ppParser::RuleClassMemberDeclaration);
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
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::PUBLIC

    || _la == C3ppParser::PRIVATE) {
      setState(83);
      accessModifier();
    }
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4120) != 0)) {
      setState(88);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(86);
        methodDeclaration();
        break;
      }

      case 2: {
        setState(87);
        fieldDeclaration();
        break;
      }

      default:
        break;
      }
      setState(92);
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


std::any C3ppParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::FieldDeclarationContext* C3ppParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, C3ppParser::RuleFieldDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    type();
    setState(94);
    match(C3ppParser::IDENTIFIER);
    setState(95);
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

C3ppParser::BlockContext* C3ppParser::MethodDeclarationContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::ParameterContext* C3ppParser::MethodDeclarationContext::parameter() {
  return getRuleContext<C3ppParser::ParameterContext>(0);
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


std::any C3ppParser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::MethodDeclarationContext* C3ppParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, C3ppParser::RuleMethodDeclaration);
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
    setState(97);
    type();
    setState(98);
    match(C3ppParser::IDENTIFIER);
    setState(99);
    match(C3ppParser::LPAREN);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4120) != 0)) {
      setState(100);
      parameter();
    }
    setState(103);
    match(C3ppParser::RPAREN);
    setState(104);
    block();
   
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

tree::TerminalNode* C3ppParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
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


std::any C3ppParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::FunctionDeclarationContext* C3ppParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, C3ppParser::RuleFunctionDeclaration);
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
    setState(106);
    type();
    setState(107);
    match(C3ppParser::IDENTIFIER);
    setState(108);
    match(C3ppParser::LPAREN);
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4120) != 0)) {
      setState(109);
      parameterList();
    }
    setState(112);
    match(C3ppParser::RPAREN);
    setState(113);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

C3ppParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ArgumentsContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::ArgumentsContext::COMMA() {
  return getTokens(C3ppParser::COMMA);
}

tree::TerminalNode* C3ppParser::ArgumentsContext::COMMA(size_t i) {
  return getToken(C3ppParser::COMMA, i);
}


size_t C3ppParser::ArgumentsContext::getRuleIndex() const {
  return C3ppParser::RuleArguments;
}

void C3ppParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void C3ppParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


std::any C3ppParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ArgumentsContext* C3ppParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 18, C3ppParser::RuleArguments);
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
    setState(115);
    expression(0);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(116);
      match(C3ppParser::COMMA);
      setState(117);
      expression(0);
      setState(122);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

C3ppParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::QualifiedIdentifierContext* C3ppParser::FunctionCallContext::qualifiedIdentifier() {
  return getRuleContext<C3ppParser::QualifiedIdentifierContext>(0);
}

tree::TerminalNode* C3ppParser::FunctionCallContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::FunctionCallContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::ArgumentsContext* C3ppParser::FunctionCallContext::arguments() {
  return getRuleContext<C3ppParser::ArgumentsContext>(0);
}


size_t C3ppParser::FunctionCallContext::getRuleIndex() const {
  return C3ppParser::RuleFunctionCall;
}

void C3ppParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void C3ppParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any C3ppParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::FunctionCallContext* C3ppParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 20, C3ppParser::RuleFunctionCall);
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
    setState(123);
    qualifiedIdentifier();
    setState(124);
    match(C3ppParser::LPAREN);
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 103079215616) != 0)) {
      setState(125);
      arguments();
    }
    setState(128);
    match(C3ppParser::RPAREN);
   
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


std::any C3ppParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ParameterListContext* C3ppParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 22, C3ppParser::RuleParameterList);
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
    setState(130);
    parameter();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(131);
      match(C3ppParser::COMMA);
      setState(132);
      parameter();
      setState(137);
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
  enterRule(_localctx, 24, C3ppParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    type();
    setState(139);
    match(C3ppParser::IDENTIFIER);
   
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
  enterRule(_localctx, 26, C3ppParser::RuleBlock);
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
    setState(141);
    match(C3ppParser::LBRACE);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 103079262744) != 0)) {
      setState(142);
      statement();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
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

C3ppParser::VariableDeclarationContext* C3ppParser::StatementContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

C3ppParser::ReturnStatementContext* C3ppParser::StatementContext::returnStatement() {
  return getRuleContext<C3ppParser::ReturnStatementContext>(0);
}

C3ppParser::ExpressionStatementContext* C3ppParser::StatementContext::expressionStatement() {
  return getRuleContext<C3ppParser::ExpressionStatementContext>(0);
}

C3ppParser::IfStatementContext* C3ppParser::StatementContext::ifStatement() {
  return getRuleContext<C3ppParser::IfStatementContext>(0);
}

C3ppParser::WhileStatementContext* C3ppParser::StatementContext::whileStatement() {
  return getRuleContext<C3ppParser::WhileStatementContext>(0);
}

C3ppParser::AssignmentContext* C3ppParser::StatementContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
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
  enterRule(_localctx, 28, C3ppParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(151);
      returnStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(152);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(153);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(154);
      whileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(155);
      assignment();
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

//----------------- VariableDeclarationContext ------------------------------------------------------------------

C3ppParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::VariableDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
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


std::any C3ppParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::VariableDeclarationContext* C3ppParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, C3ppParser::RuleVariableDeclaration);
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
    setState(158);
    type();
    setState(159);
    match(C3ppParser::IDENTIFIER);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ASSIGN) {
      setState(160);
      match(C3ppParser::ASSIGN);
      setState(161);
      expression(0);
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


std::any C3ppParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ReturnStatementContext* C3ppParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, C3ppParser::RuleReturnStatement);
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
    setState(166);
    match(C3ppParser::RETURN);
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 103079215616) != 0)) {
      setState(167);
      expression(0);
    }
    setState(170);
    match(C3ppParser::SEMI);
   
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


std::any C3ppParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ExpressionStatementContext* C3ppParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, C3ppParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    expression(0);
    setState(173);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

C3ppParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::IfStatementContext::IF() {
  return getToken(C3ppParser::IF, 0);
}

tree::TerminalNode* C3ppParser::IfStatementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::IfStatementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::IfStatementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

std::vector<C3ppParser::BlockContext *> C3ppParser::IfStatementContext::block() {
  return getRuleContexts<C3ppParser::BlockContext>();
}

C3ppParser::BlockContext* C3ppParser::IfStatementContext::block(size_t i) {
  return getRuleContext<C3ppParser::BlockContext>(i);
}

tree::TerminalNode* C3ppParser::IfStatementContext::ELSE() {
  return getToken(C3ppParser::ELSE, 0);
}


size_t C3ppParser::IfStatementContext::getRuleIndex() const {
  return C3ppParser::RuleIfStatement;
}

void C3ppParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void C3ppParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any C3ppParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::IfStatementContext* C3ppParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, C3ppParser::RuleIfStatement);
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
    setState(175);
    match(C3ppParser::IF);
    setState(176);
    match(C3ppParser::LPAREN);
    setState(177);
    expression(0);
    setState(178);
    match(C3ppParser::RPAREN);
    setState(179);
    block();
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ELSE) {
      setState(180);
      match(C3ppParser::ELSE);
      setState(181);
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

//----------------- WhileStatementContext ------------------------------------------------------------------

C3ppParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::WhileStatementContext::WHILE() {
  return getToken(C3ppParser::WHILE, 0);
}

tree::TerminalNode* C3ppParser::WhileStatementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::WhileStatementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::WhileStatementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::WhileStatementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}


size_t C3ppParser::WhileStatementContext::getRuleIndex() const {
  return C3ppParser::RuleWhileStatement;
}

void C3ppParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void C3ppParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any C3ppParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::WhileStatementContext* C3ppParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, C3ppParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(C3ppParser::WHILE);
    setState(185);
    match(C3ppParser::LPAREN);
    setState(186);
    expression(0);
    setState(187);
    match(C3ppParser::RPAREN);
    setState(188);
    block();
   
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

tree::TerminalNode* C3ppParser::AssignmentContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::AssignmentContext::ASSIGN() {
  return getToken(C3ppParser::ASSIGN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::AssignmentContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::AssignmentContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
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


std::any C3ppParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::AssignmentContext* C3ppParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 40, C3ppParser::RuleAssignment);

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
    match(C3ppParser::IDENTIFIER);
    setState(191);
    match(C3ppParser::ASSIGN);
    setState(192);
    expression(0);
    setState(193);
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

tree::TerminalNode* C3ppParser::ExpressionContext::NOT() {
  return getToken(C3ppParser::NOT, 0);
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ExpressionContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

C3ppParser::PrimaryContext* C3ppParser::ExpressionContext::primary() {
  return getRuleContext<C3ppParser::PrimaryContext>(0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::PLUS() {
  return getToken(C3ppParser::PLUS, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::MINUS() {
  return getToken(C3ppParser::MINUS, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::MULT() {
  return getToken(C3ppParser::MULT, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::DIV() {
  return getToken(C3ppParser::DIV, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::EQ() {
  return getToken(C3ppParser::EQ, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::NEQ() {
  return getToken(C3ppParser::NEQ, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::LT() {
  return getToken(C3ppParser::LT, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::LE() {
  return getToken(C3ppParser::LE, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::GT() {
  return getToken(C3ppParser::GT, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::GE() {
  return getToken(C3ppParser::GE, 0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::AND() {
  return getToken(C3ppParser::AND, 0);
}

C3ppParser::FactorContext* C3ppParser::ExpressionContext::factor() {
  return getRuleContext<C3ppParser::FactorContext>(0);
}

tree::TerminalNode* C3ppParser::ExpressionContext::OR() {
  return getToken(C3ppParser::OR, 0);
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, C3ppParser::RuleExpression, precedence);

    

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
    setState(199);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::NOT: {
        setState(196);
        match(C3ppParser::NOT);
        setState(197);
        expression(12);
        break;
      }

      case C3ppParser::IDENTIFIER:
      case C3ppParser::INT_LITERAL: {
        setState(198);
        primary();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(237);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(201);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(202);
          match(C3ppParser::PLUS);
          setState(203);
          expression(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(204);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(205);
          match(C3ppParser::MINUS);
          setState(206);
          expression(11);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(207);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(208);
          match(C3ppParser::MULT);
          setState(209);
          expression(10);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(210);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(211);
          match(C3ppParser::DIV);
          setState(212);
          expression(9);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(213);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(214);
          match(C3ppParser::EQ);
          setState(215);
          expression(8);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(216);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(217);
          match(C3ppParser::NEQ);
          setState(218);
          expression(7);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(219);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(220);
          match(C3ppParser::LT);
          setState(221);
          expression(6);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(222);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(223);
          match(C3ppParser::LE);
          setState(224);
          expression(5);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(225);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(226);
          match(C3ppParser::GT);
          setState(227);
          expression(4);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(228);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(229);
          match(C3ppParser::GE);
          setState(230);
          expression(3);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(231);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(232);
          match(C3ppParser::AND);
          setState(233);
          factor();
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(235);
          match(C3ppParser::OR);
          setState(236);
          factor();
          break;
        }

        default:
          break;
        } 
      }
      setState(241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

C3ppParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C3ppParser::FactorContext::getRuleIndex() const {
  return C3ppParser::RuleFactor;
}

void C3ppParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolExprContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::BoolExprContext::BOOLEAN_LITERAL() {
  return getToken(C3ppParser::BOOLEAN_LITERAL, 0);
}

C3ppParser::BoolExprContext::BoolExprContext(FactorContext *ctx) { copyFrom(ctx); }

void C3ppParser::BoolExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpr(this);
}
void C3ppParser::BoolExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpr(this);
}

std::any C3ppParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAccessContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::ArrayAccessContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

C3ppParser::ExpressionContext* C3ppParser::ArrayAccessContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

C3ppParser::ArrayAccessContext::ArrayAccessContext(FactorContext *ctx) { copyFrom(ctx); }

void C3ppParser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}
void C3ppParser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}

std::any C3ppParser::ArrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitArrayAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdExprContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::IdExprContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

C3ppParser::IdExprContext::IdExprContext(FactorContext *ctx) { copyFrom(ctx); }

void C3ppParser::IdExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpr(this);
}
void C3ppParser::IdExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpr(this);
}

std::any C3ppParser::IdExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitIdExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensExprContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::ParensExprContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::ParensExprContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::ParensExprContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::ParensExprContext::ParensExprContext(FactorContext *ctx) { copyFrom(ctx); }

void C3ppParser::ParensExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParensExpr(this);
}
void C3ppParser::ParensExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParensExpr(this);
}

std::any C3ppParser::ParensExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitParensExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::IntExprContext::INT_LITERAL() {
  return getToken(C3ppParser::INT_LITERAL, 0);
}

C3ppParser::IntExprContext::IntExprContext(FactorContext *ctx) { copyFrom(ctx); }

void C3ppParser::IntExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntExpr(this);
}
void C3ppParser::IntExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntExpr(this);
}

std::any C3ppParser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}
C3ppParser::FactorContext* C3ppParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 44, C3ppParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<C3ppParser::IntExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(242);
      match(C3ppParser::INT_LITERAL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<C3ppParser::BoolExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(243);
      match(C3ppParser::BOOLEAN_LITERAL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<C3ppParser::IdExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(244);
      match(C3ppParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<C3ppParser::ArrayAccessContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(245);
      match(C3ppParser::IDENTIFIER);
      setState(246);
      match(C3ppParser::T__0);
      setState(247);
      expression(0);
      setState(248);
      match(C3ppParser::T__1);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<C3ppParser::ParensExprContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(250);
      match(C3ppParser::LPAREN);
      setState(251);
      expression(0);
      setState(252);
      match(C3ppParser::RPAREN);
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

//----------------- PrimaryContext ------------------------------------------------------------------

C3ppParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::PrimaryContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::INT_LITERAL() {
  return getToken(C3ppParser::INT_LITERAL, 0);
}

C3ppParser::FunctionCallContext* C3ppParser::PrimaryContext::functionCall() {
  return getRuleContext<C3ppParser::FunctionCallContext>(0);
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


std::any C3ppParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
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
    setState(259);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(256);
      match(C3ppParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(257);
      match(C3ppParser::INT_LITERAL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(258);
      functionCall();
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

//----------------- ArrayInitExpressionContext ------------------------------------------------------------------

C3ppParser::ArrayInitExpressionContext::ArrayInitExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C3ppParser::ArrayInitExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleArrayInitExpression;
}

void C3ppParser::ArrayInitExpressionContext::copyFrom(ArrayInitExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayInitExprContext ------------------------------------------------------------------

tree::TerminalNode* C3ppParser::ArrayInitExprContext::LBRACE() {
  return getToken(C3ppParser::LBRACE, 0);
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ArrayInitExprContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ArrayInitExprContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

tree::TerminalNode* C3ppParser::ArrayInitExprContext::RBRACE() {
  return getToken(C3ppParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> C3ppParser::ArrayInitExprContext::COMMA() {
  return getTokens(C3ppParser::COMMA);
}

tree::TerminalNode* C3ppParser::ArrayInitExprContext::COMMA(size_t i) {
  return getToken(C3ppParser::COMMA, i);
}

C3ppParser::ArrayInitExprContext::ArrayInitExprContext(ArrayInitExpressionContext *ctx) { copyFrom(ctx); }

void C3ppParser::ArrayInitExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitExpr(this);
}
void C3ppParser::ArrayInitExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitExpr(this);
}

std::any C3ppParser::ArrayInitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitArrayInitExpr(this);
  else
    return visitor->visitChildren(this);
}
C3ppParser::ArrayInitExpressionContext* C3ppParser::arrayInitExpression() {
  ArrayInitExpressionContext *_localctx = _tracker.createInstance<ArrayInitExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, C3ppParser::RuleArrayInitExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<C3ppParser::ArrayInitExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(C3ppParser::LBRACE);
    setState(262);
    expression(0);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(263);
      match(C3ppParser::COMMA);
      setState(264);
      expression(0);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    match(C3ppParser::RBRACE);
   
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
  enterRule(_localctx, 50, C3ppParser::RuleType);
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
    setState(272);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4120) != 0))) {
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

//----------------- QualifiedIdentifierContext ------------------------------------------------------------------

C3ppParser::QualifiedIdentifierContext::QualifiedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> C3ppParser::QualifiedIdentifierContext::IDENTIFIER() {
  return getTokens(C3ppParser::IDENTIFIER);
}

tree::TerminalNode* C3ppParser::QualifiedIdentifierContext::IDENTIFIER(size_t i) {
  return getToken(C3ppParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> C3ppParser::QualifiedIdentifierContext::COLONCOLON() {
  return getTokens(C3ppParser::COLONCOLON);
}

tree::TerminalNode* C3ppParser::QualifiedIdentifierContext::COLONCOLON(size_t i) {
  return getToken(C3ppParser::COLONCOLON, i);
}


size_t C3ppParser::QualifiedIdentifierContext::getRuleIndex() const {
  return C3ppParser::RuleQualifiedIdentifier;
}

void C3ppParser::QualifiedIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedIdentifier(this);
}

void C3ppParser::QualifiedIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedIdentifier(this);
}


std::any C3ppParser::QualifiedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitQualifiedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::QualifiedIdentifierContext* C3ppParser::qualifiedIdentifier() {
  QualifiedIdentifierContext *_localctx = _tracker.createInstance<QualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 52, C3ppParser::RuleQualifiedIdentifier);
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
    setState(274);
    match(C3ppParser::IDENTIFIER);
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COLONCOLON) {
      setState(275);
      match(C3ppParser::COLONCOLON);
      setState(276);
      match(C3ppParser::IDENTIFIER);
      setState(281);
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

bool C3ppParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 21: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C3ppParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 14);
    case 11: return precpred(_ctx, 13);

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
