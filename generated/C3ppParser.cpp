
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
      "program", "classDeclaration", "inheritanceSpec", "classBody", "classElement", 
      "accessSpecifier", "variableDeclaration", "methodDeclaration", "type", 
      "classSection", "classMember", "parameterList", "baseType", "pointerOrReference", 
      "access_modifier", "fieldDeclaration", "parameter", "expressionStatement", 
      "ifStatement", "whileStatement", "forStatement", "returnStatement", 
      "breakStatement", "continueStatement", "block", "statement", "primary", 
      "expression", "conditionalExpression", "logicalOrExpression", "logicalAndExpression", 
      "equalityExpression", "relationalExpression", "additiveExpression", 
      "multiplicativeExpression", "unaryExpression", "postfixExpression", 
      "primaryExpression", "binaryOp", "assignment", "literal", "if_statement", 
      "while_statement", "return_statement", "expression_statement", "forInit", 
      "forCondition", "forUpdate", "rangeForStatement", "functionCall", 
      "argumentList"
    },
    std::vector<std::string>{
      "", "';'", "'='", "','", "'('", "')'", "'{'", "'}'", "'!'", "'&&'", 
      "'||'", "'if'", "'else'", "'while'", "'return'", "'public'", "'private'", 
      "'protected'", "'class'", "'int'", "'bool'", "'void'", "'string'", 
      "", "", "", "", "", "':'", "'++'", "'--'", "'+='", "'-='", "'*='", 
      "'/='", "'%='", "'*'", "'&'", "'for'", "'auto'", "'+'", "'-'", "'/'", 
      "'%'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'\\u003F'", 
      "'continue'", "'break'", "'$'"
    },
    std::vector<std::string>{
      "", "SEMI", "ASSIGN", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
      "NOT", "AND", "OR", "IF", "ELSE", "WHILE", "RETURN", "PUBLIC", "PRIVATE", 
      "PROTECTED", "CLASS", "INT", "BOOL", "VOID", "STRING", "STRING_LITERAL", 
      "BOOLEAN_LITERAL", "INTEGER_LITERAL", "IDENTIFIER", "WHITESPACE", 
      "COLON", "INCREMENT", "DECREMENT", "PLUS_ASSIGN", "MINUS_ASSIGN", 
      "STAR_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "STAR", "AMP", "FOR", "AUTO", 
      "PLUS", "MINUS", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LE", "GE", 
      "SELECTOR", "CONTINUE", "BREAK", "PTR", "ESC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,54,408,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,1,0,5,0,104,8,0,10,0,12,0,107,9,0,1,1,1,1,1,1,3,1,112,8,
  	1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,5,3,122,8,3,10,3,12,3,125,9,3,1,4,1,
  	4,1,4,1,4,1,4,3,4,132,8,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	3,7,145,8,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,5,9,155,8,9,10,9,12,9,158,
  	9,9,1,10,1,10,3,10,162,8,10,1,11,1,11,1,11,5,11,167,8,11,10,11,12,11,
  	170,9,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,3,14,180,8,14,1,15,1,
  	15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,3,18,199,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,
  	20,1,20,3,20,212,8,20,1,20,3,20,215,8,20,1,20,1,20,3,20,219,8,20,1,20,
  	1,20,1,20,1,21,1,21,3,21,226,8,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,24,1,24,5,24,238,8,24,10,24,12,24,241,9,24,1,24,1,24,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,25,3,25,252,8,25,1,26,1,26,1,26,1,26,1,26,1,26,
  	3,26,260,8,26,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,3,28,270,8,28,1,
  	29,1,29,1,29,5,29,275,8,29,10,29,12,29,278,9,29,1,30,1,30,1,30,5,30,283,
  	8,30,10,30,12,30,286,9,30,1,31,1,31,1,31,5,31,291,8,31,10,31,12,31,294,
  	9,31,1,32,1,32,1,32,5,32,299,8,32,10,32,12,32,302,9,32,1,33,1,33,1,33,
  	5,33,307,8,33,10,33,12,33,310,9,33,1,34,1,34,1,34,5,34,315,8,34,10,34,
  	12,34,318,9,34,1,35,1,35,1,35,3,35,323,8,35,1,36,1,36,5,36,327,8,36,10,
  	36,12,36,330,9,36,1,37,1,37,1,37,1,37,1,37,1,37,3,37,338,8,37,1,38,1,
  	38,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,41,1,
  	41,3,41,356,8,41,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,3,43,366,8,43,
  	1,43,1,43,1,44,1,44,1,44,1,45,1,45,3,45,375,8,45,1,46,1,46,1,47,1,47,
  	3,47,381,8,47,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,49,1,49,
  	1,49,3,49,395,8,49,1,49,1,49,1,49,1,50,1,50,1,50,5,50,403,8,50,10,50,
  	12,50,406,9,50,1,50,0,0,51,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,
  	78,80,82,84,86,88,90,92,94,96,98,100,0,12,1,0,15,16,2,0,19,22,26,26,1,
  	0,19,22,2,0,37,37,53,53,1,0,44,45,1,0,46,49,1,0,40,41,2,0,36,36,42,43,
  	3,0,8,8,29,30,40,41,1,0,29,30,3,0,9,10,36,36,40,49,2,0,19,20,22,25,398,
  	0,105,1,0,0,0,2,108,1,0,0,0,4,117,1,0,0,0,6,123,1,0,0,0,8,131,1,0,0,0,
  	10,133,1,0,0,0,12,135,1,0,0,0,14,140,1,0,0,0,16,149,1,0,0,0,18,151,1,
  	0,0,0,20,161,1,0,0,0,22,163,1,0,0,0,24,171,1,0,0,0,26,173,1,0,0,0,28,
  	179,1,0,0,0,30,181,1,0,0,0,32,185,1,0,0,0,34,188,1,0,0,0,36,191,1,0,0,
  	0,38,200,1,0,0,0,40,206,1,0,0,0,42,223,1,0,0,0,44,229,1,0,0,0,46,232,
  	1,0,0,0,48,235,1,0,0,0,50,251,1,0,0,0,52,259,1,0,0,0,54,261,1,0,0,0,56,
  	263,1,0,0,0,58,271,1,0,0,0,60,279,1,0,0,0,62,287,1,0,0,0,64,295,1,0,0,
  	0,66,303,1,0,0,0,68,311,1,0,0,0,70,322,1,0,0,0,72,324,1,0,0,0,74,337,
  	1,0,0,0,76,339,1,0,0,0,78,341,1,0,0,0,80,346,1,0,0,0,82,348,1,0,0,0,84,
  	357,1,0,0,0,86,363,1,0,0,0,88,369,1,0,0,0,90,374,1,0,0,0,92,376,1,0,0,
  	0,94,380,1,0,0,0,96,382,1,0,0,0,98,391,1,0,0,0,100,399,1,0,0,0,102,104,
  	3,2,1,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,
  	0,106,1,1,0,0,0,107,105,1,0,0,0,108,109,5,18,0,0,109,111,5,26,0,0,110,
  	112,3,4,2,0,111,110,1,0,0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,114,5,
  	6,0,0,114,115,3,6,3,0,115,116,5,7,0,0,116,3,1,0,0,0,117,118,5,28,0,0,
  	118,119,5,26,0,0,119,5,1,0,0,0,120,122,3,8,4,0,121,120,1,0,0,0,122,125,
  	1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,7,1,0,0,0,125,123,1,0,0,0,
  	126,127,3,10,5,0,127,128,5,28,0,0,128,132,1,0,0,0,129,132,3,12,6,0,130,
  	132,3,14,7,0,131,126,1,0,0,0,131,129,1,0,0,0,131,130,1,0,0,0,132,9,1,
  	0,0,0,133,134,7,0,0,0,134,11,1,0,0,0,135,136,3,16,8,0,136,137,5,2,0,0,
  	137,138,5,26,0,0,138,139,5,1,0,0,139,13,1,0,0,0,140,141,3,16,8,0,141,
  	142,5,26,0,0,142,144,5,4,0,0,143,145,3,22,11,0,144,143,1,0,0,0,144,145,
  	1,0,0,0,145,146,1,0,0,0,146,147,5,5,0,0,147,148,3,48,24,0,148,15,1,0,
  	0,0,149,150,7,1,0,0,150,17,1,0,0,0,151,152,3,10,5,0,152,156,5,28,0,0,
  	153,155,3,20,10,0,154,153,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,
  	157,1,0,0,0,157,19,1,0,0,0,158,156,1,0,0,0,159,162,3,14,7,0,160,162,3,
  	30,15,0,161,159,1,0,0,0,161,160,1,0,0,0,162,21,1,0,0,0,163,168,3,32,16,
  	0,164,165,5,3,0,0,165,167,3,32,16,0,166,164,1,0,0,0,167,170,1,0,0,0,168,
  	166,1,0,0,0,168,169,1,0,0,0,169,23,1,0,0,0,170,168,1,0,0,0,171,172,7,
  	2,0,0,172,25,1,0,0,0,173,174,7,3,0,0,174,27,1,0,0,0,175,176,5,15,0,0,
  	176,180,5,28,0,0,177,178,5,16,0,0,178,180,5,28,0,0,179,175,1,0,0,0,179,
  	177,1,0,0,0,180,29,1,0,0,0,181,182,3,16,8,0,182,183,5,26,0,0,183,184,
  	5,1,0,0,184,31,1,0,0,0,185,186,3,16,8,0,186,187,5,26,0,0,187,33,1,0,0,
  	0,188,189,3,54,27,0,189,190,5,1,0,0,190,35,1,0,0,0,191,192,5,11,0,0,192,
  	193,5,4,0,0,193,194,3,54,27,0,194,195,5,5,0,0,195,198,3,48,24,0,196,197,
  	5,12,0,0,197,199,3,48,24,0,198,196,1,0,0,0,198,199,1,0,0,0,199,37,1,0,
  	0,0,200,201,5,13,0,0,201,202,5,4,0,0,202,203,3,54,27,0,203,204,5,5,0,
  	0,204,205,3,48,24,0,205,39,1,0,0,0,206,207,5,38,0,0,207,211,5,4,0,0,208,
  	212,3,12,6,0,209,212,3,78,39,0,210,212,5,1,0,0,211,208,1,0,0,0,211,209,
  	1,0,0,0,211,210,1,0,0,0,212,214,1,0,0,0,213,215,3,54,27,0,214,213,1,0,
  	0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,218,5,1,0,0,217,219,3,54,27,0,
  	218,217,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,221,5,5,0,0,221,222,
  	3,48,24,0,222,41,1,0,0,0,223,225,5,14,0,0,224,226,3,54,27,0,225,224,1,
  	0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,5,1,0,0,228,43,1,0,0,0,
  	229,230,5,52,0,0,230,231,5,1,0,0,231,45,1,0,0,0,232,233,5,51,0,0,233,
  	234,5,1,0,0,234,47,1,0,0,0,235,239,5,6,0,0,236,238,3,50,25,0,237,236,
  	1,0,0,0,238,241,1,0,0,0,239,237,1,0,0,0,239,240,1,0,0,0,240,242,1,0,0,
  	0,241,239,1,0,0,0,242,243,5,7,0,0,243,49,1,0,0,0,244,252,3,34,17,0,245,
  	252,3,12,6,0,246,252,3,36,18,0,247,252,3,38,19,0,248,252,3,42,21,0,249,
  	252,3,98,49,0,250,252,3,48,24,0,251,244,1,0,0,0,251,245,1,0,0,0,251,246,
  	1,0,0,0,251,247,1,0,0,0,251,248,1,0,0,0,251,249,1,0,0,0,251,250,1,0,0,
  	0,252,51,1,0,0,0,253,260,3,80,40,0,254,260,5,26,0,0,255,256,5,4,0,0,256,
  	257,3,54,27,0,257,258,5,5,0,0,258,260,1,0,0,0,259,253,1,0,0,0,259,254,
  	1,0,0,0,259,255,1,0,0,0,260,53,1,0,0,0,261,262,3,56,28,0,262,55,1,0,0,
  	0,263,269,3,58,29,0,264,265,5,50,0,0,265,266,3,54,27,0,266,267,5,28,0,
  	0,267,268,3,54,27,0,268,270,1,0,0,0,269,264,1,0,0,0,269,270,1,0,0,0,270,
  	57,1,0,0,0,271,276,3,60,30,0,272,273,5,10,0,0,273,275,3,60,30,0,274,272,
  	1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,1,0,0,0,277,59,1,0,0,
  	0,278,276,1,0,0,0,279,284,3,62,31,0,280,281,5,9,0,0,281,283,3,62,31,0,
  	282,280,1,0,0,0,283,286,1,0,0,0,284,282,1,0,0,0,284,285,1,0,0,0,285,61,
  	1,0,0,0,286,284,1,0,0,0,287,292,3,64,32,0,288,289,7,4,0,0,289,291,3,64,
  	32,0,290,288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,
  	293,63,1,0,0,0,294,292,1,0,0,0,295,300,3,66,33,0,296,297,7,5,0,0,297,
  	299,3,66,33,0,298,296,1,0,0,0,299,302,1,0,0,0,300,298,1,0,0,0,300,301,
  	1,0,0,0,301,65,1,0,0,0,302,300,1,0,0,0,303,308,3,68,34,0,304,305,7,6,
  	0,0,305,307,3,68,34,0,306,304,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,
  	308,309,1,0,0,0,309,67,1,0,0,0,310,308,1,0,0,0,311,316,3,70,35,0,312,
  	313,7,7,0,0,313,315,3,70,35,0,314,312,1,0,0,0,315,318,1,0,0,0,316,314,
  	1,0,0,0,316,317,1,0,0,0,317,69,1,0,0,0,318,316,1,0,0,0,319,320,7,8,0,
  	0,320,323,3,70,35,0,321,323,3,72,36,0,322,319,1,0,0,0,322,321,1,0,0,0,
  	323,71,1,0,0,0,324,328,3,74,37,0,325,327,7,9,0,0,326,325,1,0,0,0,327,
  	330,1,0,0,0,328,326,1,0,0,0,328,329,1,0,0,0,329,73,1,0,0,0,330,328,1,
  	0,0,0,331,338,5,26,0,0,332,338,3,80,40,0,333,334,5,4,0,0,334,335,3,54,
  	27,0,335,336,5,5,0,0,336,338,1,0,0,0,337,331,1,0,0,0,337,332,1,0,0,0,
  	337,333,1,0,0,0,338,75,1,0,0,0,339,340,7,10,0,0,340,77,1,0,0,0,341,342,
  	5,26,0,0,342,343,5,2,0,0,343,344,3,54,27,0,344,345,5,1,0,0,345,79,1,0,
  	0,0,346,347,7,11,0,0,347,81,1,0,0,0,348,349,5,11,0,0,349,350,5,4,0,0,
  	350,351,3,54,27,0,351,352,5,5,0,0,352,355,3,48,24,0,353,354,5,12,0,0,
  	354,356,3,48,24,0,355,353,1,0,0,0,355,356,1,0,0,0,356,83,1,0,0,0,357,
  	358,5,13,0,0,358,359,5,4,0,0,359,360,3,54,27,0,360,361,5,5,0,0,361,362,
  	3,48,24,0,362,85,1,0,0,0,363,365,5,14,0,0,364,366,3,54,27,0,365,364,1,
  	0,0,0,365,366,1,0,0,0,366,367,1,0,0,0,367,368,5,1,0,0,368,87,1,0,0,0,
  	369,370,3,54,27,0,370,371,5,1,0,0,371,89,1,0,0,0,372,375,3,12,6,0,373,
  	375,3,78,39,0,374,372,1,0,0,0,374,373,1,0,0,0,375,91,1,0,0,0,376,377,
  	3,54,27,0,377,93,1,0,0,0,378,381,3,78,39,0,379,381,3,54,27,0,380,378,
  	1,0,0,0,380,379,1,0,0,0,381,95,1,0,0,0,382,383,5,38,0,0,383,384,5,4,0,
  	0,384,385,5,39,0,0,385,386,5,26,0,0,386,387,5,28,0,0,387,388,3,54,27,
  	0,388,389,5,5,0,0,389,390,3,48,24,0,390,97,1,0,0,0,391,392,5,26,0,0,392,
  	394,5,4,0,0,393,395,3,100,50,0,394,393,1,0,0,0,394,395,1,0,0,0,395,396,
  	1,0,0,0,396,397,5,5,0,0,397,398,5,1,0,0,398,99,1,0,0,0,399,404,3,54,27,
  	0,400,401,5,3,0,0,401,403,3,54,27,0,402,400,1,0,0,0,403,406,1,0,0,0,404,
  	402,1,0,0,0,404,405,1,0,0,0,405,101,1,0,0,0,406,404,1,0,0,0,33,105,111,
  	123,131,144,156,161,168,179,198,211,214,218,225,239,251,259,269,276,284,
  	292,300,308,316,322,328,337,355,365,374,380,394,404
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

std::vector<C3ppParser::ClassDeclarationContext *> C3ppParser::ProgramContext::classDeclaration() {
  return getRuleContexts<C3ppParser::ClassDeclarationContext>();
}

C3ppParser::ClassDeclarationContext* C3ppParser::ProgramContext::classDeclaration(size_t i) {
  return getRuleContext<C3ppParser::ClassDeclarationContext>(i);
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
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::CLASS) {
      setState(102);
      classDeclaration();
      setState(107);
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

C3ppParser::InheritanceSpecContext* C3ppParser::ClassDeclarationContext::inheritanceSpec() {
  return getRuleContext<C3ppParser::InheritanceSpecContext>(0);
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
    setState(108);
    match(C3ppParser::CLASS);
    setState(109);
    match(C3ppParser::IDENTIFIER);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::COLON) {
      setState(110);
      inheritanceSpec();
    }
    setState(113);
    match(C3ppParser::LBRACE);
    setState(114);
    classBody();
    setState(115);
    match(C3ppParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceSpecContext ------------------------------------------------------------------

C3ppParser::InheritanceSpecContext::InheritanceSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::InheritanceSpecContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}

tree::TerminalNode* C3ppParser::InheritanceSpecContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}


size_t C3ppParser::InheritanceSpecContext::getRuleIndex() const {
  return C3ppParser::RuleInheritanceSpec;
}

void C3ppParser::InheritanceSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritanceSpec(this);
}

void C3ppParser::InheritanceSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritanceSpec(this);
}


std::any C3ppParser::InheritanceSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitInheritanceSpec(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::InheritanceSpecContext* C3ppParser::inheritanceSpec() {
  InheritanceSpecContext *_localctx = _tracker.createInstance<InheritanceSpecContext>(_ctx, getState());
  enterRule(_localctx, 4, C3ppParser::RuleInheritanceSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(C3ppParser::COLON);
    setState(118);
    match(C3ppParser::IDENTIFIER);
   
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

std::vector<C3ppParser::ClassElementContext *> C3ppParser::ClassBodyContext::classElement() {
  return getRuleContexts<C3ppParser::ClassElementContext>();
}

C3ppParser::ClassElementContext* C3ppParser::ClassBodyContext::classElement(size_t i) {
  return getRuleContext<C3ppParser::ClassElementContext>(i);
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
  enterRule(_localctx, 6, C3ppParser::RuleClassBody);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75071488) != 0)) {
      setState(120);
      classElement();
      setState(125);
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

//----------------- ClassElementContext ------------------------------------------------------------------

C3ppParser::ClassElementContext::ClassElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C3ppParser::ClassElementContext::getRuleIndex() const {
  return C3ppParser::RuleClassElement;
}

void C3ppParser::ClassElementContext::copyFrom(ClassElementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AccessSectionContext ------------------------------------------------------------------

C3ppParser::AccessSpecifierContext* C3ppParser::AccessSectionContext::accessSpecifier() {
  return getRuleContext<C3ppParser::AccessSpecifierContext>(0);
}

tree::TerminalNode* C3ppParser::AccessSectionContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}

C3ppParser::AccessSectionContext::AccessSectionContext(ClassElementContext *ctx) { copyFrom(ctx); }

void C3ppParser::AccessSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSection(this);
}
void C3ppParser::AccessSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSection(this);
}

std::any C3ppParser::AccessSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAccessSection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FieldDeclContext ------------------------------------------------------------------

C3ppParser::VariableDeclarationContext* C3ppParser::FieldDeclContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

C3ppParser::FieldDeclContext::FieldDeclContext(ClassElementContext *ctx) { copyFrom(ctx); }

void C3ppParser::FieldDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDecl(this);
}
void C3ppParser::FieldDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDecl(this);
}

std::any C3ppParser::FieldDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitFieldDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MethodDeclContext ------------------------------------------------------------------

C3ppParser::MethodDeclarationContext* C3ppParser::MethodDeclContext::methodDeclaration() {
  return getRuleContext<C3ppParser::MethodDeclarationContext>(0);
}

C3ppParser::MethodDeclContext::MethodDeclContext(ClassElementContext *ctx) { copyFrom(ctx); }

void C3ppParser::MethodDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDecl(this);
}
void C3ppParser::MethodDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDecl(this);
}

std::any C3ppParser::MethodDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitMethodDecl(this);
  else
    return visitor->visitChildren(this);
}
C3ppParser::ClassElementContext* C3ppParser::classElement() {
  ClassElementContext *_localctx = _tracker.createInstance<ClassElementContext>(_ctx, getState());
  enterRule(_localctx, 8, C3ppParser::RuleClassElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<C3ppParser::AccessSectionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(126);
      accessSpecifier();
      setState(127);
      match(C3ppParser::COLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<C3ppParser::FieldDeclContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(129);
      variableDeclaration();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<C3ppParser::MethodDeclContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(130);
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

//----------------- AccessSpecifierContext ------------------------------------------------------------------

C3ppParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::AccessSpecifierContext::PUBLIC() {
  return getToken(C3ppParser::PUBLIC, 0);
}

tree::TerminalNode* C3ppParser::AccessSpecifierContext::PRIVATE() {
  return getToken(C3ppParser::PRIVATE, 0);
}


size_t C3ppParser::AccessSpecifierContext::getRuleIndex() const {
  return C3ppParser::RuleAccessSpecifier;
}

void C3ppParser::AccessSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSpecifier(this);
}

void C3ppParser::AccessSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSpecifier(this);
}


std::any C3ppParser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAccessSpecifier(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::AccessSpecifierContext* C3ppParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 10, C3ppParser::RuleAccessSpecifier);
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

//----------------- VariableDeclarationContext ------------------------------------------------------------------

C3ppParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::TypeContext* C3ppParser::VariableDeclarationContext::type() {
  return getRuleContext<C3ppParser::TypeContext>(0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::ASSIGN() {
  return getToken(C3ppParser::ASSIGN, 0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::VariableDeclarationContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
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
  enterRule(_localctx, 12, C3ppParser::RuleVariableDeclaration);

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
    type();
    setState(136);
    match(C3ppParser::ASSIGN);
    setState(137);
    match(C3ppParser::IDENTIFIER);
    setState(138);
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
    setState(140);
    type();
    setState(141);
    match(C3ppParser::IDENTIFIER);
    setState(142);
    match(C3ppParser::LPAREN);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 74973184) != 0)) {
      setState(143);
      parameterList();
    }
    setState(146);
    match(C3ppParser::RPAREN);
    setState(147);
    block();
   
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

tree::TerminalNode* C3ppParser::TypeContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 16, C3ppParser::RuleType);
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
    setState(149);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 74973184) != 0))) {
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

//----------------- ClassSectionContext ------------------------------------------------------------------

C3ppParser::ClassSectionContext::ClassSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::AccessSpecifierContext* C3ppParser::ClassSectionContext::accessSpecifier() {
  return getRuleContext<C3ppParser::AccessSpecifierContext>(0);
}

tree::TerminalNode* C3ppParser::ClassSectionContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}

std::vector<C3ppParser::ClassMemberContext *> C3ppParser::ClassSectionContext::classMember() {
  return getRuleContexts<C3ppParser::ClassMemberContext>();
}

C3ppParser::ClassMemberContext* C3ppParser::ClassSectionContext::classMember(size_t i) {
  return getRuleContext<C3ppParser::ClassMemberContext>(i);
}


size_t C3ppParser::ClassSectionContext::getRuleIndex() const {
  return C3ppParser::RuleClassSection;
}

void C3ppParser::ClassSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSection(this);
}

void C3ppParser::ClassSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSection(this);
}


std::any C3ppParser::ClassSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitClassSection(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ClassSectionContext* C3ppParser::classSection() {
  ClassSectionContext *_localctx = _tracker.createInstance<ClassSectionContext>(_ctx, getState());
  enterRule(_localctx, 18, C3ppParser::RuleClassSection);
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
    setState(151);
    accessSpecifier();
    setState(152);
    match(C3ppParser::COLON);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 74973184) != 0)) {
      setState(153);
      classMember();
      setState(158);
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

//----------------- ClassMemberContext ------------------------------------------------------------------

C3ppParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::MethodDeclarationContext* C3ppParser::ClassMemberContext::methodDeclaration() {
  return getRuleContext<C3ppParser::MethodDeclarationContext>(0);
}

C3ppParser::FieldDeclarationContext* C3ppParser::ClassMemberContext::fieldDeclaration() {
  return getRuleContext<C3ppParser::FieldDeclarationContext>(0);
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
  enterRule(_localctx, 20, C3ppParser::RuleClassMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(159);
      methodDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(160);
      fieldDeclaration();
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
    setState(163);
    parameter();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(164);
      match(C3ppParser::COMMA);
      setState(165);
      parameter();
      setState(170);
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

//----------------- BaseTypeContext ------------------------------------------------------------------

C3ppParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::BaseTypeContext::INT() {
  return getToken(C3ppParser::INT, 0);
}

tree::TerminalNode* C3ppParser::BaseTypeContext::BOOL() {
  return getToken(C3ppParser::BOOL, 0);
}

tree::TerminalNode* C3ppParser::BaseTypeContext::STRING() {
  return getToken(C3ppParser::STRING, 0);
}

tree::TerminalNode* C3ppParser::BaseTypeContext::VOID() {
  return getToken(C3ppParser::VOID, 0);
}


size_t C3ppParser::BaseTypeContext::getRuleIndex() const {
  return C3ppParser::RuleBaseType;
}

void C3ppParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void C3ppParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}


std::any C3ppParser::BaseTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBaseType(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::BaseTypeContext* C3ppParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, C3ppParser::RuleBaseType);
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
    setState(171);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7864320) != 0))) {
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

//----------------- PointerOrReferenceContext ------------------------------------------------------------------

C3ppParser::PointerOrReferenceContext::PointerOrReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::PointerOrReferenceContext::PTR() {
  return getToken(C3ppParser::PTR, 0);
}

tree::TerminalNode* C3ppParser::PointerOrReferenceContext::AMP() {
  return getToken(C3ppParser::AMP, 0);
}


size_t C3ppParser::PointerOrReferenceContext::getRuleIndex() const {
  return C3ppParser::RulePointerOrReference;
}

void C3ppParser::PointerOrReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerOrReference(this);
}

void C3ppParser::PointerOrReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerOrReference(this);
}


std::any C3ppParser::PointerOrReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitPointerOrReference(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::PointerOrReferenceContext* C3ppParser::pointerOrReference() {
  PointerOrReferenceContext *_localctx = _tracker.createInstance<PointerOrReferenceContext>(_ctx, getState());
  enterRule(_localctx, 26, C3ppParser::RulePointerOrReference);
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
    setState(173);
    _la = _input->LA(1);
    if (!(_la == C3ppParser::AMP

    || _la == C3ppParser::PTR)) {
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
  enterRule(_localctx, 28, C3ppParser::RuleAccess_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::PUBLIC: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        match(C3ppParser::PUBLIC);
        setState(176);
        match(C3ppParser::COLON);
        break;
      }

      case C3ppParser::PRIVATE: {
        enterOuterAlt(_localctx, 2);
        setState(177);
        match(C3ppParser::PRIVATE);
        setState(178);
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
  enterRule(_localctx, 30, C3ppParser::RuleFieldDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    type();
    setState(182);
    match(C3ppParser::IDENTIFIER);
    setState(183);
    match(C3ppParser::SEMI);
   
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
  enterRule(_localctx, 32, C3ppParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    type();
    setState(186);
    match(C3ppParser::IDENTIFIER);
   
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
    setState(188);
    expression();
    setState(189);
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
    setState(191);
    match(C3ppParser::IF);
    setState(192);
    match(C3ppParser::LPAREN);
    setState(193);
    expression();
    setState(194);
    match(C3ppParser::RPAREN);
    setState(195);
    block();
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ELSE) {
      setState(196);
      match(C3ppParser::ELSE);
      setState(197);
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
    setState(200);
    match(C3ppParser::WHILE);
    setState(201);
    match(C3ppParser::LPAREN);
    setState(202);
    expression();
    setState(203);
    match(C3ppParser::RPAREN);
    setState(204);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

C3ppParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ForStatementContext::FOR() {
  return getToken(C3ppParser::FOR, 0);
}

tree::TerminalNode* C3ppParser::ForStatementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> C3ppParser::ForStatementContext::SEMI() {
  return getTokens(C3ppParser::SEMI);
}

tree::TerminalNode* C3ppParser::ForStatementContext::SEMI(size_t i) {
  return getToken(C3ppParser::SEMI, i);
}

tree::TerminalNode* C3ppParser::ForStatementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::ForStatementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}

C3ppParser::VariableDeclarationContext* C3ppParser::ForStatementContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

C3ppParser::AssignmentContext* C3ppParser::ForStatementContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ForStatementContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}


size_t C3ppParser::ForStatementContext::getRuleIndex() const {
  return C3ppParser::RuleForStatement;
}

void C3ppParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void C3ppParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


std::any C3ppParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ForStatementContext* C3ppParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, C3ppParser::RuleForStatement);
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
    setState(206);
    match(C3ppParser::FOR);
    setState(207);
    match(C3ppParser::LPAREN);
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(208);
      variableDeclaration();
      break;
    }

    case 2: {
      setState(209);
      assignment();
      break;
    }

    case 3: {
      setState(210);
      match(C3ppParser::SEMI);
      break;
    }

    default:
      break;
    }
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300277092624) != 0)) {
      setState(213);
      expression();
    }
    setState(216);
    match(C3ppParser::SEMI);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300277092624) != 0)) {
      setState(217);
      expression();
    }
    setState(220);
    match(C3ppParser::RPAREN);
    setState(221);
    block();
   
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
  enterRule(_localctx, 42, C3ppParser::RuleReturnStatement);
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
    setState(223);
    match(C3ppParser::RETURN);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300277092624) != 0)) {
      setState(224);
      expression();
    }
    setState(227);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

C3ppParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::BreakStatementContext::BREAK() {
  return getToken(C3ppParser::BREAK, 0);
}

tree::TerminalNode* C3ppParser::BreakStatementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::BreakStatementContext::getRuleIndex() const {
  return C3ppParser::RuleBreakStatement;
}

void C3ppParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void C3ppParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


std::any C3ppParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::BreakStatementContext* C3ppParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, C3ppParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(C3ppParser::BREAK);
    setState(230);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

C3ppParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::ContinueStatementContext::CONTINUE() {
  return getToken(C3ppParser::CONTINUE, 0);
}

tree::TerminalNode* C3ppParser::ContinueStatementContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}


size_t C3ppParser::ContinueStatementContext::getRuleIndex() const {
  return C3ppParser::RuleContinueStatement;
}

void C3ppParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void C3ppParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


std::any C3ppParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ContinueStatementContext* C3ppParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, C3ppParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(C3ppParser::CONTINUE);
    setState(233);
    match(C3ppParser::SEMI);
   
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
  enterRule(_localctx, 48, C3ppParser::RuleBlock);
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
    setState(235);
    match(C3ppParser::LBRACE);
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300279216464) != 0)) {
      setState(236);
      statement();
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(242);
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

C3ppParser::ExpressionStatementContext* C3ppParser::StatementContext::expressionStatement() {
  return getRuleContext<C3ppParser::ExpressionStatementContext>(0);
}

C3ppParser::VariableDeclarationContext* C3ppParser::StatementContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

C3ppParser::IfStatementContext* C3ppParser::StatementContext::ifStatement() {
  return getRuleContext<C3ppParser::IfStatementContext>(0);
}

C3ppParser::WhileStatementContext* C3ppParser::StatementContext::whileStatement() {
  return getRuleContext<C3ppParser::WhileStatementContext>(0);
}

C3ppParser::ReturnStatementContext* C3ppParser::StatementContext::returnStatement() {
  return getRuleContext<C3ppParser::ReturnStatementContext>(0);
}

C3ppParser::FunctionCallContext* C3ppParser::StatementContext::functionCall() {
  return getRuleContext<C3ppParser::FunctionCallContext>(0);
}

C3ppParser::BlockContext* C3ppParser::StatementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
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
  enterRule(_localctx, 50, C3ppParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(244);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(245);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(246);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(247);
      whileStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(248);
      returnStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(249);
      functionCall();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(250);
      block();
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

C3ppParser::LiteralContext* C3ppParser::PrimaryContext::literal() {
  return getRuleContext<C3ppParser::LiteralContext>(0);
}

tree::TerminalNode* C3ppParser::PrimaryContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
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


std::any C3ppParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::PrimaryContext* C3ppParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 52, C3ppParser::RulePrimary);

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
    switch (_input->LA(1)) {
      case C3ppParser::INT:
      case C3ppParser::BOOL:
      case C3ppParser::STRING:
      case C3ppParser::STRING_LITERAL:
      case C3ppParser::BOOLEAN_LITERAL:
      case C3ppParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(253);
        literal();
        break;
      }

      case C3ppParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(254);
        match(C3ppParser::IDENTIFIER);
        break;
      }

      case C3ppParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(255);
        match(C3ppParser::LPAREN);
        setState(256);
        expression();
        setState(257);
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

//----------------- ExpressionContext ------------------------------------------------------------------

C3ppParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::ConditionalExpressionContext* C3ppParser::ExpressionContext::conditionalExpression() {
  return getRuleContext<C3ppParser::ConditionalExpressionContext>(0);
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
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, C3ppParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

C3ppParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::LogicalOrExpressionContext* C3ppParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<C3ppParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::ConditionalExpressionContext::SELECTOR() {
  return getToken(C3ppParser::SELECTOR, 0);
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ConditionalExpressionContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ConditionalExpressionContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

tree::TerminalNode* C3ppParser::ConditionalExpressionContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}


size_t C3ppParser::ConditionalExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleConditionalExpression;
}

void C3ppParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void C3ppParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


std::any C3ppParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ConditionalExpressionContext* C3ppParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, C3ppParser::RuleConditionalExpression);
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
    setState(263);
    logicalOrExpression();
    setState(269);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::SELECTOR) {
      setState(264);
      match(C3ppParser::SELECTOR);
      setState(265);
      expression();
      setState(266);
      match(C3ppParser::COLON);
      setState(267);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

C3ppParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::LogicalAndExpressionContext *> C3ppParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<C3ppParser::LogicalAndExpressionContext>();
}

C3ppParser::LogicalAndExpressionContext* C3ppParser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<C3ppParser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::LogicalOrExpressionContext::OR() {
  return getTokens(C3ppParser::OR);
}

tree::TerminalNode* C3ppParser::LogicalOrExpressionContext::OR(size_t i) {
  return getToken(C3ppParser::OR, i);
}


size_t C3ppParser::LogicalOrExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleLogicalOrExpression;
}

void C3ppParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void C3ppParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


std::any C3ppParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::LogicalOrExpressionContext* C3ppParser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, C3ppParser::RuleLogicalOrExpression);
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
    setState(271);
    logicalAndExpression();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::OR) {
      setState(272);
      match(C3ppParser::OR);
      setState(273);
      logicalAndExpression();
      setState(278);
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

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

C3ppParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::EqualityExpressionContext *> C3ppParser::LogicalAndExpressionContext::equalityExpression() {
  return getRuleContexts<C3ppParser::EqualityExpressionContext>();
}

C3ppParser::EqualityExpressionContext* C3ppParser::LogicalAndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<C3ppParser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::LogicalAndExpressionContext::AND() {
  return getTokens(C3ppParser::AND);
}

tree::TerminalNode* C3ppParser::LogicalAndExpressionContext::AND(size_t i) {
  return getToken(C3ppParser::AND, i);
}


size_t C3ppParser::LogicalAndExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleLogicalAndExpression;
}

void C3ppParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void C3ppParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


std::any C3ppParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::LogicalAndExpressionContext* C3ppParser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, C3ppParser::RuleLogicalAndExpression);
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
    setState(279);
    equalityExpression();
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::AND) {
      setState(280);
      match(C3ppParser::AND);
      setState(281);
      equalityExpression();
      setState(286);
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

//----------------- EqualityExpressionContext ------------------------------------------------------------------

C3ppParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::RelationalExpressionContext *> C3ppParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<C3ppParser::RelationalExpressionContext>();
}

C3ppParser::RelationalExpressionContext* C3ppParser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<C3ppParser::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::EqualityExpressionContext::EQ() {
  return getTokens(C3ppParser::EQ);
}

tree::TerminalNode* C3ppParser::EqualityExpressionContext::EQ(size_t i) {
  return getToken(C3ppParser::EQ, i);
}

std::vector<tree::TerminalNode *> C3ppParser::EqualityExpressionContext::NEQ() {
  return getTokens(C3ppParser::NEQ);
}

tree::TerminalNode* C3ppParser::EqualityExpressionContext::NEQ(size_t i) {
  return getToken(C3ppParser::NEQ, i);
}


size_t C3ppParser::EqualityExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleEqualityExpression;
}

void C3ppParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void C3ppParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


std::any C3ppParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::EqualityExpressionContext* C3ppParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, C3ppParser::RuleEqualityExpression);
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
    setState(287);
    relationalExpression();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::EQ

    || _la == C3ppParser::NEQ) {
      setState(288);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::EQ

      || _la == C3ppParser::NEQ)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(289);
      relationalExpression();
      setState(294);
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

//----------------- RelationalExpressionContext ------------------------------------------------------------------

C3ppParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::AdditiveExpressionContext *> C3ppParser::RelationalExpressionContext::additiveExpression() {
  return getRuleContexts<C3ppParser::AdditiveExpressionContext>();
}

C3ppParser::AdditiveExpressionContext* C3ppParser::RelationalExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<C3ppParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::RelationalExpressionContext::LT() {
  return getTokens(C3ppParser::LT);
}

tree::TerminalNode* C3ppParser::RelationalExpressionContext::LT(size_t i) {
  return getToken(C3ppParser::LT, i);
}

std::vector<tree::TerminalNode *> C3ppParser::RelationalExpressionContext::GT() {
  return getTokens(C3ppParser::GT);
}

tree::TerminalNode* C3ppParser::RelationalExpressionContext::GT(size_t i) {
  return getToken(C3ppParser::GT, i);
}

std::vector<tree::TerminalNode *> C3ppParser::RelationalExpressionContext::LE() {
  return getTokens(C3ppParser::LE);
}

tree::TerminalNode* C3ppParser::RelationalExpressionContext::LE(size_t i) {
  return getToken(C3ppParser::LE, i);
}

std::vector<tree::TerminalNode *> C3ppParser::RelationalExpressionContext::GE() {
  return getTokens(C3ppParser::GE);
}

tree::TerminalNode* C3ppParser::RelationalExpressionContext::GE(size_t i) {
  return getToken(C3ppParser::GE, i);
}


size_t C3ppParser::RelationalExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleRelationalExpression;
}

void C3ppParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void C3ppParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


std::any C3ppParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::RelationalExpressionContext* C3ppParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 64, C3ppParser::RuleRelationalExpression);
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
    setState(295);
    additiveExpression();
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1055531162664960) != 0)) {
      setState(296);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1055531162664960) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(297);
      additiveExpression();
      setState(302);
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

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

C3ppParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::MultiplicativeExpressionContext *> C3ppParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<C3ppParser::MultiplicativeExpressionContext>();
}

C3ppParser::MultiplicativeExpressionContext* C3ppParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<C3ppParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::AdditiveExpressionContext::PLUS() {
  return getTokens(C3ppParser::PLUS);
}

tree::TerminalNode* C3ppParser::AdditiveExpressionContext::PLUS(size_t i) {
  return getToken(C3ppParser::PLUS, i);
}

std::vector<tree::TerminalNode *> C3ppParser::AdditiveExpressionContext::MINUS() {
  return getTokens(C3ppParser::MINUS);
}

tree::TerminalNode* C3ppParser::AdditiveExpressionContext::MINUS(size_t i) {
  return getToken(C3ppParser::MINUS, i);
}


size_t C3ppParser::AdditiveExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleAdditiveExpression;
}

void C3ppParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void C3ppParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


std::any C3ppParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::AdditiveExpressionContext* C3ppParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, C3ppParser::RuleAdditiveExpression);
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
    setState(303);
    multiplicativeExpression();
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::PLUS

    || _la == C3ppParser::MINUS) {
      setState(304);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::PLUS

      || _la == C3ppParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(305);
      multiplicativeExpression();
      setState(310);
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

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

C3ppParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::UnaryExpressionContext *> C3ppParser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContexts<C3ppParser::UnaryExpressionContext>();
}

C3ppParser::UnaryExpressionContext* C3ppParser::MultiplicativeExpressionContext::unaryExpression(size_t i) {
  return getRuleContext<C3ppParser::UnaryExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::MultiplicativeExpressionContext::STAR() {
  return getTokens(C3ppParser::STAR);
}

tree::TerminalNode* C3ppParser::MultiplicativeExpressionContext::STAR(size_t i) {
  return getToken(C3ppParser::STAR, i);
}

std::vector<tree::TerminalNode *> C3ppParser::MultiplicativeExpressionContext::DIV() {
  return getTokens(C3ppParser::DIV);
}

tree::TerminalNode* C3ppParser::MultiplicativeExpressionContext::DIV(size_t i) {
  return getToken(C3ppParser::DIV, i);
}

std::vector<tree::TerminalNode *> C3ppParser::MultiplicativeExpressionContext::MOD() {
  return getTokens(C3ppParser::MOD);
}

tree::TerminalNode* C3ppParser::MultiplicativeExpressionContext::MOD(size_t i) {
  return getToken(C3ppParser::MOD, i);
}


size_t C3ppParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleMultiplicativeExpression;
}

void C3ppParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void C3ppParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


std::any C3ppParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::MultiplicativeExpressionContext* C3ppParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 68, C3ppParser::RuleMultiplicativeExpression);
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
    setState(311);
    unaryExpression();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13262859010048) != 0)) {
      setState(312);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 13262859010048) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(313);
      unaryExpression();
      setState(318);
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

//----------------- UnaryExpressionContext ------------------------------------------------------------------

C3ppParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::UnaryExpressionContext* C3ppParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<C3ppParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::UnaryExpressionContext::INCREMENT() {
  return getToken(C3ppParser::INCREMENT, 0);
}

tree::TerminalNode* C3ppParser::UnaryExpressionContext::DECREMENT() {
  return getToken(C3ppParser::DECREMENT, 0);
}

tree::TerminalNode* C3ppParser::UnaryExpressionContext::NOT() {
  return getToken(C3ppParser::NOT, 0);
}

tree::TerminalNode* C3ppParser::UnaryExpressionContext::PLUS() {
  return getToken(C3ppParser::PLUS, 0);
}

tree::TerminalNode* C3ppParser::UnaryExpressionContext::MINUS() {
  return getToken(C3ppParser::MINUS, 0);
}

C3ppParser::PostfixExpressionContext* C3ppParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<C3ppParser::PostfixExpressionContext>(0);
}


size_t C3ppParser::UnaryExpressionContext::getRuleIndex() const {
  return C3ppParser::RuleUnaryExpression;
}

void C3ppParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void C3ppParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


std::any C3ppParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::UnaryExpressionContext* C3ppParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, C3ppParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(322);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::NOT:
      case C3ppParser::INCREMENT:
      case C3ppParser::DECREMENT:
      case C3ppParser::PLUS:
      case C3ppParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(319);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3300145496320) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(320);
        unaryExpression();
        break;
      }

      case C3ppParser::LPAREN:
      case C3ppParser::INT:
      case C3ppParser::BOOL:
      case C3ppParser::STRING:
      case C3ppParser::STRING_LITERAL:
      case C3ppParser::BOOLEAN_LITERAL:
      case C3ppParser::INTEGER_LITERAL:
      case C3ppParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(321);
        postfixExpression();
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

C3ppParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::PrimaryExpressionContext* C3ppParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<C3ppParser::PrimaryExpressionContext>(0);
}

std::vector<tree::TerminalNode *> C3ppParser::PostfixExpressionContext::INCREMENT() {
  return getTokens(C3ppParser::INCREMENT);
}

tree::TerminalNode* C3ppParser::PostfixExpressionContext::INCREMENT(size_t i) {
  return getToken(C3ppParser::INCREMENT, i);
}

std::vector<tree::TerminalNode *> C3ppParser::PostfixExpressionContext::DECREMENT() {
  return getTokens(C3ppParser::DECREMENT);
}

tree::TerminalNode* C3ppParser::PostfixExpressionContext::DECREMENT(size_t i) {
  return getToken(C3ppParser::DECREMENT, i);
}


size_t C3ppParser::PostfixExpressionContext::getRuleIndex() const {
  return C3ppParser::RulePostfixExpression;
}

void C3ppParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void C3ppParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


std::any C3ppParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::PostfixExpressionContext* C3ppParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, C3ppParser::RulePostfixExpression);
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
    setState(324);
    primaryExpression();
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::INCREMENT

    || _la == C3ppParser::DECREMENT) {
      setState(325);
      _la = _input->LA(1);
      if (!(_la == C3ppParser::INCREMENT

      || _la == C3ppParser::DECREMENT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(330);
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

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

C3ppParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::PrimaryExpressionContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

C3ppParser::LiteralContext* C3ppParser::PrimaryExpressionContext::literal() {
  return getRuleContext<C3ppParser::LiteralContext>(0);
}

tree::TerminalNode* C3ppParser::PrimaryExpressionContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

C3ppParser::ExpressionContext* C3ppParser::PrimaryExpressionContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::PrimaryExpressionContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}


size_t C3ppParser::PrimaryExpressionContext::getRuleIndex() const {
  return C3ppParser::RulePrimaryExpression;
}

void C3ppParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void C3ppParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


std::any C3ppParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::PrimaryExpressionContext* C3ppParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 74, C3ppParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C3ppParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(331);
        match(C3ppParser::IDENTIFIER);
        break;
      }

      case C3ppParser::INT:
      case C3ppParser::BOOL:
      case C3ppParser::STRING:
      case C3ppParser::STRING_LITERAL:
      case C3ppParser::BOOLEAN_LITERAL:
      case C3ppParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(332);
        literal();
        break;
      }

      case C3ppParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(333);
        match(C3ppParser::LPAREN);
        setState(334);
        expression();
        setState(335);
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

//----------------- BinaryOpContext ------------------------------------------------------------------

C3ppParser::BinaryOpContext::BinaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::BinaryOpContext::PLUS() {
  return getToken(C3ppParser::PLUS, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::MINUS() {
  return getToken(C3ppParser::MINUS, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::STAR() {
  return getToken(C3ppParser::STAR, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::DIV() {
  return getToken(C3ppParser::DIV, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::MOD() {
  return getToken(C3ppParser::MOD, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::EQ() {
  return getToken(C3ppParser::EQ, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::NEQ() {
  return getToken(C3ppParser::NEQ, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::LT() {
  return getToken(C3ppParser::LT, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::LE() {
  return getToken(C3ppParser::LE, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::GT() {
  return getToken(C3ppParser::GT, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::GE() {
  return getToken(C3ppParser::GE, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::AND() {
  return getToken(C3ppParser::AND, 0);
}

tree::TerminalNode* C3ppParser::BinaryOpContext::OR() {
  return getToken(C3ppParser::OR, 0);
}


size_t C3ppParser::BinaryOpContext::getRuleIndex() const {
  return C3ppParser::RuleBinaryOp;
}

void C3ppParser::BinaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOp(this);
}

void C3ppParser::BinaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOp(this);
}


std::any C3ppParser::BinaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitBinaryOp(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::BinaryOpContext* C3ppParser::binaryOp() {
  BinaryOpContext *_localctx = _tracker.createInstance<BinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 76, C3ppParser::RuleBinaryOp);
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
    setState(339);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1124869114693120) != 0))) {
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
  enterRule(_localctx, 78, C3ppParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(C3ppParser::IDENTIFIER);
    setState(342);
    match(C3ppParser::ASSIGN);
    setState(343);
    expression();
    setState(344);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

C3ppParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::LiteralContext::INTEGER_LITERAL() {
  return getToken(C3ppParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::LiteralContext::BOOLEAN_LITERAL() {
  return getToken(C3ppParser::BOOLEAN_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::LiteralContext::STRING_LITERAL() {
  return getToken(C3ppParser::STRING_LITERAL, 0);
}

tree::TerminalNode* C3ppParser::LiteralContext::INT() {
  return getToken(C3ppParser::INT, 0);
}

tree::TerminalNode* C3ppParser::LiteralContext::STRING() {
  return getToken(C3ppParser::STRING, 0);
}

tree::TerminalNode* C3ppParser::LiteralContext::BOOL() {
  return getToken(C3ppParser::BOOL, 0);
}


size_t C3ppParser::LiteralContext::getRuleIndex() const {
  return C3ppParser::RuleLiteral;
}

void C3ppParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void C3ppParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


std::any C3ppParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::LiteralContext* C3ppParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 80, C3ppParser::RuleLiteral);
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
    setState(346);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64487424) != 0))) {
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
  enterRule(_localctx, 82, C3ppParser::RuleIf_statement);
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
    setState(348);
    match(C3ppParser::IF);
    setState(349);
    match(C3ppParser::LPAREN);
    setState(350);
    expression();
    setState(351);
    match(C3ppParser::RPAREN);
    setState(352);
    block();
    setState(355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == C3ppParser::ELSE) {
      setState(353);
      match(C3ppParser::ELSE);
      setState(354);
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
  enterRule(_localctx, 84, C3ppParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(C3ppParser::WHILE);
    setState(358);
    match(C3ppParser::LPAREN);
    setState(359);
    expression();
    setState(360);
    match(C3ppParser::RPAREN);
    setState(361);
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
  enterRule(_localctx, 86, C3ppParser::RuleReturn_statement);
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
    setState(363);
    match(C3ppParser::RETURN);
    setState(365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300277092624) != 0)) {
      setState(364);
      expression();
    }
    setState(367);
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
  enterRule(_localctx, 88, C3ppParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    expression();
    setState(370);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

C3ppParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::VariableDeclarationContext* C3ppParser::ForInitContext::variableDeclaration() {
  return getRuleContext<C3ppParser::VariableDeclarationContext>(0);
}

C3ppParser::AssignmentContext* C3ppParser::ForInitContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
}


size_t C3ppParser::ForInitContext::getRuleIndex() const {
  return C3ppParser::RuleForInit;
}

void C3ppParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void C3ppParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}


std::any C3ppParser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ForInitContext* C3ppParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 90, C3ppParser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(374);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(372);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(373);
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

//----------------- ForConditionContext ------------------------------------------------------------------

C3ppParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::ExpressionContext* C3ppParser::ForConditionContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}


size_t C3ppParser::ForConditionContext::getRuleIndex() const {
  return C3ppParser::RuleForCondition;
}

void C3ppParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void C3ppParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}


std::any C3ppParser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ForConditionContext* C3ppParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 92, C3ppParser::RuleForCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

C3ppParser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C3ppParser::AssignmentContext* C3ppParser::ForUpdateContext::assignment() {
  return getRuleContext<C3ppParser::AssignmentContext>(0);
}

C3ppParser::ExpressionContext* C3ppParser::ForUpdateContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}


size_t C3ppParser::ForUpdateContext::getRuleIndex() const {
  return C3ppParser::RuleForUpdate;
}

void C3ppParser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForUpdate(this);
}

void C3ppParser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForUpdate(this);
}


std::any C3ppParser::ForUpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitForUpdate(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ForUpdateContext* C3ppParser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 94, C3ppParser::RuleForUpdate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(380);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(378);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(379);
      expression();
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

//----------------- RangeForStatementContext ------------------------------------------------------------------

C3ppParser::RangeForStatementContext::RangeForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::FOR() {
  return getToken(C3ppParser::FOR, 0);
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::AUTO() {
  return getToken(C3ppParser::AUTO, 0);
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::COLON() {
  return getToken(C3ppParser::COLON, 0);
}

C3ppParser::ExpressionContext* C3ppParser::RangeForStatementContext::expression() {
  return getRuleContext<C3ppParser::ExpressionContext>(0);
}

tree::TerminalNode* C3ppParser::RangeForStatementContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

C3ppParser::BlockContext* C3ppParser::RangeForStatementContext::block() {
  return getRuleContext<C3ppParser::BlockContext>(0);
}


size_t C3ppParser::RangeForStatementContext::getRuleIndex() const {
  return C3ppParser::RuleRangeForStatement;
}

void C3ppParser::RangeForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeForStatement(this);
}

void C3ppParser::RangeForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeForStatement(this);
}


std::any C3ppParser::RangeForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitRangeForStatement(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::RangeForStatementContext* C3ppParser::rangeForStatement() {
  RangeForStatementContext *_localctx = _tracker.createInstance<RangeForStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, C3ppParser::RuleRangeForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(C3ppParser::FOR);
    setState(383);
    match(C3ppParser::LPAREN);
    setState(384);
    match(C3ppParser::AUTO);
    setState(385);
    match(C3ppParser::IDENTIFIER);
    setState(386);
    match(C3ppParser::COLON);
    setState(387);
    expression();
    setState(388);
    match(C3ppParser::RPAREN);
    setState(389);
    block();
   
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

tree::TerminalNode* C3ppParser::FunctionCallContext::IDENTIFIER() {
  return getToken(C3ppParser::IDENTIFIER, 0);
}

tree::TerminalNode* C3ppParser::FunctionCallContext::LPAREN() {
  return getToken(C3ppParser::LPAREN, 0);
}

tree::TerminalNode* C3ppParser::FunctionCallContext::RPAREN() {
  return getToken(C3ppParser::RPAREN, 0);
}

tree::TerminalNode* C3ppParser::FunctionCallContext::SEMI() {
  return getToken(C3ppParser::SEMI, 0);
}

C3ppParser::ArgumentListContext* C3ppParser::FunctionCallContext::argumentList() {
  return getRuleContext<C3ppParser::ArgumentListContext>(0);
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
  enterRule(_localctx, 98, C3ppParser::RuleFunctionCall);
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
    setState(391);
    match(C3ppParser::IDENTIFIER);
    setState(392);
    match(C3ppParser::LPAREN);
    setState(394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3300277092624) != 0)) {
      setState(393);
      argumentList();
    }
    setState(396);
    match(C3ppParser::RPAREN);
    setState(397);
    match(C3ppParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

C3ppParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C3ppParser::ExpressionContext *> C3ppParser::ArgumentListContext::expression() {
  return getRuleContexts<C3ppParser::ExpressionContext>();
}

C3ppParser::ExpressionContext* C3ppParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<C3ppParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> C3ppParser::ArgumentListContext::COMMA() {
  return getTokens(C3ppParser::COMMA);
}

tree::TerminalNode* C3ppParser::ArgumentListContext::COMMA(size_t i) {
  return getToken(C3ppParser::COMMA, i);
}


size_t C3ppParser::ArgumentListContext::getRuleIndex() const {
  return C3ppParser::RuleArgumentList;
}

void C3ppParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void C3ppParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C3ppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


std::any C3ppParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C3ppVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

C3ppParser::ArgumentListContext* C3ppParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 100, C3ppParser::RuleArgumentList);
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
    setState(399);
    expression();
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C3ppParser::COMMA) {
      setState(400);
      match(C3ppParser::COMMA);
      setState(401);
      expression();
      setState(406);
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

void C3ppParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c3ppParserInitialize();
#else
  ::antlr4::internal::call_once(c3ppParserOnceFlag, c3ppParserInitialize);
#endif
}
