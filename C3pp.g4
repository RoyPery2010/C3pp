grammar C3pp;

// Lexer Rules
SEMI: ';' ;
ASSIGN: '=' ;
COMMA: ',' ;
LPAREN: '(' ;
RPAREN: ')' ;
LBRACE: '{' ;
RBRACE: '}' ;
NOT: '!' ;
AND: '&&' ;
OR: '||' ;
IF: 'if' ;
ELSE: 'else' ;
WHILE: 'while' ;
RETURN: 'return' ;
PUBLIC: 'public' ;
PRIVATE: 'private' ;
PROTECTED: 'protected' ;
CLASS: 'class' ;
INT: 'int' ;
BOOL: 'bool' ;
VOID: 'void' ;
STRING: 'string' ;
STRING_LITERAL
    : '"' (~["\\] | '\\' .)* '"'
    ;

BOOLEAN_LITERAL: 'true' | 'false' ;
INTEGER_LITERAL: [0-9]+ ;
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]* ;
WHITESPACE: [ \t\r\n]+ -> skip ;
COLON: ':' ;
INCREMENT: '++';
DECREMENT: '--';
PLUS_ASSIGN:    '+=';
MINUS_ASSIGN:   '-=';
STAR_ASSIGN:    '*=';
DIV_ASSIGN:     '/=';
MOD_ASSIGN:     '%=';
STAR : '*' ;
AMP : '&' ;
FOR : 'for';
AUTO : 'auto';
PLUS : '+';
MINUS : '-';
DIV : '/' ;
MOD : '%';
EQ : '==' ;
NEQ : '!=';
LT : '<';
GT : '>';
LE : '<=';
GE : '>=';
SELECTOR : '?';
CONTINUE : 'continue';
BREAK : 'break';
PTR : '$';

// Parser Rules
program: classDeclaration* ;

classDeclaration
    : 'class' IDENTIFIER inheritanceSpec? LBRACE classBody RBRACE 
    ;

inheritanceSpec
    : COLON IDENTIFIER // for inheritance like class A : B
    ;

classBody
    : classElement*
    ;

classElement
    : accessSpecifier COLON                #accessSection
    | variableDeclaration                   #fieldDecl
    | methodDeclaration                   #methodDecl
    ;

accessSpecifier
    : PUBLIC
    | PRIVATE
    ;

variableDeclaration
    : type ASSIGN IDENTIFIER SEMI
    ;

methodDeclaration
    : type IDENTIFIER LPAREN parameterList? RPAREN block
    ;


type
    : INT
    | BOOL
    | VOID
    | STRING
    | IDENTIFIER // for user-defined types
    ;

classSection
    : accessSpecifier COLON classMember*
    ;
classMember
    : methodDeclaration
    | fieldDeclaration
    ;



parameterList
    : parameter (',' parameter)*
    ;

baseType
    : INT | BOOL | STRING | VOID
    ;

pointerOrReference
    : PTR | AMP
    ;



access_modifier
    : PUBLIC COLON
    | PRIVATE COLON
    ;

fieldDeclaration
    : type IDENTIFIER SEMI
    ;

parameter
    : type IDENTIFIER
    ;


// -- Statements --

expressionStatement
  : expression SEMI
  ;

ifStatement
    : IF LPAREN expression RPAREN block ('else' block)?
    ;

whileStatement
    : WHILE LPAREN expression RPAREN block
    ;

forStatement
    : FOR LPAREN (variableDeclaration | assignment | SEMI) expression? SEMI expression? RPAREN block
    ;

returnStatement
    : RETURN expression? SEMI
    ;

breakStatement
    : BREAK SEMI
    ;

continueStatement
    : CONTINUE SEMI
    ;

block
    : LBRACE statement* RBRACE
    ;

statement
    : expressionStatement
    | variableDeclaration
    | ifStatement
    | whileStatement
    | returnStatement
    | functionCall
    | block
    ;


// -- Expressions --

primary
    : literal
    | IDENTIFIER
    | LPAREN expression RPAREN
    ;

expression
    : conditionalExpression
    ;

conditionalExpression
    : logicalOrExpression (SELECTOR expression COLON expression)?
    ;

logicalOrExpression
    : logicalAndExpression ( OR logicalAndExpression )*
    ;

logicalAndExpression
    : equalityExpression ( AND equalityExpression )*
    ;

equalityExpression
    : relationalExpression ( (EQ | NEQ) relationalExpression )*
    ;

relationalExpression
    : additiveExpression ( (LT | GT | LE | GE) additiveExpression )*
    ;

additiveExpression
    : multiplicativeExpression ( (PLUS | MINUS) multiplicativeExpression )*
    ;

multiplicativeExpression
    : unaryExpression ( (STAR | DIV | MOD) unaryExpression )*
    ;

unaryExpression
    : ( INCREMENT | DECREMENT | NOT | PLUS | MINUS) unaryExpression
    | postfixExpression
    ;

postfixExpression
    : primaryExpression (INCREMENT | DECREMENT)*
    ;

primaryExpression
    : IDENTIFIER
    | literal
    | LPAREN expression RPAREN
    ;

binaryOp
    : PLUS | MINUS | STAR | DIV | MOD | EQ | NEQ | LT | LE | GT | GE | AND | OR
    ;

assignment
    : IDENTIFIER ASSIGN expression SEMI
    ;

literal
    : INTEGER_LITERAL
    | BOOLEAN_LITERAL
    | STRING_LITERAL
    | INT
    | STRING
    | BOOL
    ;



if_statement: IF LPAREN expression RPAREN block (ELSE block)? ;

while_statement: WHILE LPAREN expression RPAREN block ;

return_statement: RETURN expression? SEMI ;

expression_statement: expression SEMI ;

forInit
    : variableDeclaration
    | assignment
    ;

forCondition
    : expression
    ;

forUpdate
    : assignment
    | expression
    ;
rangeForStatement
    : FOR LPAREN AUTO IDENTIFIER COLON expression RPAREN block
    ;

functionCall
  : IDENTIFIER '(' argumentList? ')' SEMI
  ;

argumentList
  : expression (',' expression)*
  ;



ESC: '\\' [btnfr"'\\] ;
