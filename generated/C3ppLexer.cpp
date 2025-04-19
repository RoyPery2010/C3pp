
// Generated from C3pp.g4 by ANTLR 4.13.2


#include "C3ppLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct C3ppLexerStaticData final {
  C3ppLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  C3ppLexerStaticData(const C3ppLexerStaticData&) = delete;
  C3ppLexerStaticData(C3ppLexerStaticData&&) = delete;
  C3ppLexerStaticData& operator=(const C3ppLexerStaticData&) = delete;
  C3ppLexerStaticData& operator=(C3ppLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag c3pplexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<C3ppLexerStaticData> c3pplexerLexerStaticData = nullptr;

void c3pplexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (c3pplexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(c3pplexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<C3ppLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "LINE_COMMENT", "BLOCK_COMMENT", "AND", 
      "OR", "NOT", "CLASS", "RETURN", "INT", "IF", "ELSE", "WHILE", "SEMI", 
      "COMMA", "ASSIGN", "EQ", "NEQ", "LT", "LE", "GT", "GE", "LPAREN", 
      "RPAREN", "LBRACE", "RBRACE", "PLUS", "MINUS", "MULT", "DIV", "COLONCOLON", 
      "STD", "IDENTIFIER", "INT_LITERAL", "BOOLEAN_LITERAL", "WS", "PUBLIC", 
      "PRIVATE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,40,253,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,5,4,100,8,4,10,4,12,4,
  	103,9,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,111,8,5,10,5,12,5,114,9,5,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,
  	16,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,
  	22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,
  	28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,
  	34,1,34,5,34,207,8,34,10,34,12,34,210,9,34,1,35,4,35,213,8,35,11,35,12,
  	35,214,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,36,226,8,36,1,37,
  	4,37,229,8,37,11,37,12,37,230,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,112,
  	0,40,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,
  	73,37,75,38,77,39,79,40,1,0,5,2,0,10,10,13,13,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,13,13,32,32,258,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,
  	0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,
  	77,1,0,0,0,0,79,1,0,0,0,1,81,1,0,0,0,3,83,1,0,0,0,5,85,1,0,0,0,7,90,1,
  	0,0,0,9,95,1,0,0,0,11,106,1,0,0,0,13,120,1,0,0,0,15,123,1,0,0,0,17,126,
  	1,0,0,0,19,128,1,0,0,0,21,134,1,0,0,0,23,141,1,0,0,0,25,145,1,0,0,0,27,
  	148,1,0,0,0,29,153,1,0,0,0,31,159,1,0,0,0,33,161,1,0,0,0,35,163,1,0,0,
  	0,37,165,1,0,0,0,39,168,1,0,0,0,41,171,1,0,0,0,43,173,1,0,0,0,45,176,
  	1,0,0,0,47,178,1,0,0,0,49,181,1,0,0,0,51,183,1,0,0,0,53,185,1,0,0,0,55,
  	187,1,0,0,0,57,189,1,0,0,0,59,191,1,0,0,0,61,193,1,0,0,0,63,195,1,0,0,
  	0,65,197,1,0,0,0,67,200,1,0,0,0,69,204,1,0,0,0,71,212,1,0,0,0,73,225,
  	1,0,0,0,75,228,1,0,0,0,77,234,1,0,0,0,79,243,1,0,0,0,81,82,5,91,0,0,82,
  	2,1,0,0,0,83,84,5,93,0,0,84,4,1,0,0,0,85,86,5,98,0,0,86,87,5,111,0,0,
  	87,88,5,111,0,0,88,89,5,108,0,0,89,6,1,0,0,0,90,91,5,118,0,0,91,92,5,
  	111,0,0,92,93,5,105,0,0,93,94,5,100,0,0,94,8,1,0,0,0,95,96,5,47,0,0,96,
  	97,5,47,0,0,97,101,1,0,0,0,98,100,8,0,0,0,99,98,1,0,0,0,100,103,1,0,0,
  	0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,0,0,0,104,
  	105,6,4,0,0,105,10,1,0,0,0,106,107,5,47,0,0,107,108,5,42,0,0,108,112,
  	1,0,0,0,109,111,9,0,0,0,110,109,1,0,0,0,111,114,1,0,0,0,112,113,1,0,0,
  	0,112,110,1,0,0,0,113,115,1,0,0,0,114,112,1,0,0,0,115,116,5,42,0,0,116,
  	117,5,47,0,0,117,118,1,0,0,0,118,119,6,5,0,0,119,12,1,0,0,0,120,121,5,
  	38,0,0,121,122,5,38,0,0,122,14,1,0,0,0,123,124,5,124,0,0,124,125,5,124,
  	0,0,125,16,1,0,0,0,126,127,5,33,0,0,127,18,1,0,0,0,128,129,5,99,0,0,129,
  	130,5,108,0,0,130,131,5,97,0,0,131,132,5,115,0,0,132,133,5,115,0,0,133,
  	20,1,0,0,0,134,135,5,114,0,0,135,136,5,101,0,0,136,137,5,116,0,0,137,
  	138,5,117,0,0,138,139,5,114,0,0,139,140,5,110,0,0,140,22,1,0,0,0,141,
  	142,5,105,0,0,142,143,5,110,0,0,143,144,5,116,0,0,144,24,1,0,0,0,145,
  	146,5,105,0,0,146,147,5,102,0,0,147,26,1,0,0,0,148,149,5,101,0,0,149,
  	150,5,108,0,0,150,151,5,115,0,0,151,152,5,101,0,0,152,28,1,0,0,0,153,
  	154,5,119,0,0,154,155,5,104,0,0,155,156,5,105,0,0,156,157,5,108,0,0,157,
  	158,5,101,0,0,158,30,1,0,0,0,159,160,5,59,0,0,160,32,1,0,0,0,161,162,
  	5,44,0,0,162,34,1,0,0,0,163,164,5,61,0,0,164,36,1,0,0,0,165,166,5,61,
  	0,0,166,167,5,61,0,0,167,38,1,0,0,0,168,169,5,33,0,0,169,170,5,61,0,0,
  	170,40,1,0,0,0,171,172,5,60,0,0,172,42,1,0,0,0,173,174,5,60,0,0,174,175,
  	5,61,0,0,175,44,1,0,0,0,176,177,5,62,0,0,177,46,1,0,0,0,178,179,5,62,
  	0,0,179,180,5,61,0,0,180,48,1,0,0,0,181,182,5,40,0,0,182,50,1,0,0,0,183,
  	184,5,41,0,0,184,52,1,0,0,0,185,186,5,123,0,0,186,54,1,0,0,0,187,188,
  	5,125,0,0,188,56,1,0,0,0,189,190,5,43,0,0,190,58,1,0,0,0,191,192,5,45,
  	0,0,192,60,1,0,0,0,193,194,5,42,0,0,194,62,1,0,0,0,195,196,5,47,0,0,196,
  	64,1,0,0,0,197,198,5,58,0,0,198,199,5,58,0,0,199,66,1,0,0,0,200,201,5,
  	115,0,0,201,202,5,116,0,0,202,203,5,100,0,0,203,68,1,0,0,0,204,208,7,
  	1,0,0,205,207,7,2,0,0,206,205,1,0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,
  	208,209,1,0,0,0,209,70,1,0,0,0,210,208,1,0,0,0,211,213,7,3,0,0,212,211,
  	1,0,0,0,213,214,1,0,0,0,214,212,1,0,0,0,214,215,1,0,0,0,215,72,1,0,0,
  	0,216,217,5,116,0,0,217,218,5,114,0,0,218,219,5,117,0,0,219,226,5,101,
  	0,0,220,221,5,102,0,0,221,222,5,97,0,0,222,223,5,108,0,0,223,224,5,115,
  	0,0,224,226,5,101,0,0,225,216,1,0,0,0,225,220,1,0,0,0,226,74,1,0,0,0,
  	227,229,7,4,0,0,228,227,1,0,0,0,229,230,1,0,0,0,230,228,1,0,0,0,230,231,
  	1,0,0,0,231,232,1,0,0,0,232,233,6,37,0,0,233,76,1,0,0,0,234,235,5,112,
  	0,0,235,236,5,117,0,0,236,237,5,98,0,0,237,238,5,108,0,0,238,239,5,105,
  	0,0,239,240,5,99,0,0,240,241,1,0,0,0,241,242,5,58,0,0,242,78,1,0,0,0,
  	243,244,5,112,0,0,244,245,5,114,0,0,245,246,5,105,0,0,246,247,5,118,0,
  	0,247,248,5,97,0,0,248,249,5,116,0,0,249,250,5,101,0,0,250,251,1,0,0,
  	0,251,252,5,58,0,0,252,80,1,0,0,0,7,0,101,112,208,214,225,230,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  c3pplexerLexerStaticData = std::move(staticData);
}

}

C3ppLexer::C3ppLexer(CharStream *input) : Lexer(input) {
  C3ppLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *c3pplexerLexerStaticData->atn, c3pplexerLexerStaticData->decisionToDFA, c3pplexerLexerStaticData->sharedContextCache);
}

C3ppLexer::~C3ppLexer() {
  delete _interpreter;
}

std::string C3ppLexer::getGrammarFileName() const {
  return "C3pp.g4";
}

const std::vector<std::string>& C3ppLexer::getRuleNames() const {
  return c3pplexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& C3ppLexer::getChannelNames() const {
  return c3pplexerLexerStaticData->channelNames;
}

const std::vector<std::string>& C3ppLexer::getModeNames() const {
  return c3pplexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& C3ppLexer::getVocabulary() const {
  return c3pplexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView C3ppLexer::getSerializedATN() const {
  return c3pplexerLexerStaticData->serializedATN;
}

const atn::ATN& C3ppLexer::getATN() const {
  return *c3pplexerLexerStaticData->atn;
}




void C3ppLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c3pplexerLexerInitialize();
#else
  ::antlr4::internal::call_once(c3pplexerLexerOnceFlag, c3pplexerLexerInitialize);
#endif
}
