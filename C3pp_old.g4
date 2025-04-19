grammar C3pp;

program
    : (classDeclaration | functionDeclaration)* EOF
    ;

// -----------------------
// Class Declarations
// -----------------------
classDeclaration
    : CLASS IDENTIFIER LBRACE classBody RBRACE SEMI
    ;

classBody
    : (methodDeclaration | variableDeclaration)*
    ;

classMember
    : fieldDeclaration
    | methodDeclaration
    ;

fieldDeclaration
    : type IDENTIFIER SEMI
    ;

methodDeclaration
    : type IDENTIFIER LPAREN parameterList? RPAREN block
    ;

// -----------------------
// Global Function
// -----------------------
functionDeclaration
    : type IDENTIFIER LPAREN parameterList? RPAREN block
    ;

// -----------------------
// Parameters
// -----------------------
parameterList
    : parameter (COMMA parameter)*
    ;

parameter
    : type IDENTIFIER
    ;

// -----------------------
// Statements & Block
// -----------------------
block
    : LBRACE statement* RBRACE
    ;

statement
    : variableDeclaration
    | returnStatement
    | expressionStatement
    | ifStatement
    | whileStatement
    | assignment
    ;

variableDeclaration
    : type IDENTIFIER (ASSIGN expression)? SEMI
    ;

returnStatement
    : RETURN expression? SEMI
    ;

expressionStatement
    : expression SEMI
    ;

ifStatement
    : IF LPAREN expression RPAREN block (ELSE block)?
    ;

whileStatement
    : WHILE LPAREN expression RPAREN block
    ;
assignment
    : IDENTIFIER ASSIGN expression SEMI
    ;


// -----------------------
// Expressions
// -----------------------
expression
    : expression AND factor               
    | expression OR factor             
    | NOT expression 
    | expression PLUS expression
    | expression MINUS expression
    | expression MULT expression
    | expression DIV expression
    | expression EQ expression         
    | expression NEQ expression        
    | expression LT expression         
    | expression LE expression         
    | expression GT expression         
    | expression GE expression         
    | primary                          
    ;
factor
    : INT_LITERAL                         # IntExpr
    | BOOLEAN_LITERAL                     # BoolExpr
    | IDENTIFIER                          # IdExpr
    | IDENTIFIER '[' expression ']'       # ArrayAccess
    | '(' expression ')'                  # ParensExpr
    ;

primary
    : IDENTIFIER
    | INT_LITERAL
    ;
arrayInitExpression
    : '{' expression (',' expression)* '}' # ArrayInitExpr
    ;

LINE_COMMENT
    : '//' ~[\r\n]* -> skip
    ;

BLOCK_COMMENT
    : '/*' .*? '*/' -> skip
    ;

// -----------------------
// Types
// -----------------------
type
    : 'int' 
    | 'bool' 
    ;

// -----------------------
// Lexer Rules (Keywords)
// -----------------------
AND : '&&';
OR  : '||';
NOT : '!';
CLASS       : 'class';
RETURN      : 'return';
INT         : 'int';
IF          : 'if';
ELSE        : 'else';
WHILE       : 'while';

// -----------------------
// Symbols
// -----------------------
SEMI        : ';';
COMMA       : ',';
ASSIGN      : '=';
EQ          : '==';
NEQ         : '!=';
LT          : '<';
LE          : '<=';
GT          : '>';
GE          : '>=';
LPAREN      : '(';
RPAREN      : ')';
LBRACE      : '{';
RBRACE      : '}';
PLUS : '+';
MINUS : '-';
MULT : '*';
DIV : '/';


// -----------------------
// Identifiers & Literals
// -----------------------
IDENTIFIER  : [a-zA-Z_] [a-zA-Z0-9_]*;
INT_LITERAL : [0-9]+;
BOOLEAN_LITERAL : 'true' | 'false';   // Explicitly defining the BOOLEAN_LITERAL token


// -----------------------
// Skip whitespace and comments
// -----------------------
WS           : [ \t\r\n]+ -> skip;
