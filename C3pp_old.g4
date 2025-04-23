grammar C3pp;

// Lexer Rules
SEMI: ';' ;
ASSIGN: '=' ;
COMMA: ',' ;
LPAREN: '(' ;
RPAREN: ')' ;
LBRACE: '{' ;
RBRACE: '}' ;
NOT: 'not' ;
AND: 'and' ;
OR: 'or' ;
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
STRING_LITERAL: '"' (ESC | ~["\\])* '"' ;
BOOLEAN_LITERAL: 'true' | 'false' ;
INT_LITERAL: [0-9]+ ;
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


// Parser Rules
program: class_declaration* ;

class_declaration: CLASS IDENTIFIER LBRACE class_member* RBRACE ;

class_member: method_declaration | field_declaration | access_modifier;

method_declaration: type IDENTIFIER LPAREN parameter_list? RPAREN block ;

field_declaration: type IDENTIFIER SEMI ;

parameter_list: parameter (COMMA parameter)* ;

parameter: type IDENTIFIER ;

type: INT | BOOL | VOID | STRING ;

access_modifier
    : PUBLIC COLON
    | PRIVATE COLON
    ;

block: LBRACE statement* RBRACE ;

statement: assignment | if_statement | while_statement | return_statement | expression_statement | forStatement ;

assignment
    : IDENTIFIER '=' expression                   # assign
    | IDENTIFIER PLUS_ASSIGN expression           # plusAssign
    | IDENTIFIER MINUS_ASSIGN expression          # minusAssign
    | IDENTIFIER STAR_ASSIGN expression           # multAssign
    | IDENTIFIER DIV_ASSIGN expression            # divAssign
    | IDENTIFIER MOD_ASSIGN expression            # modAssign
    ;


if_statement: IF LPAREN expression RPAREN block (ELSE block)? ;

while_statement: WHILE LPAREN expression RPAREN block ;

return_statement: RETURN expression? SEMI ;

expression_statement: expression SEMI ;

expression
    : IDENTIFIER                                      # varReference
    | INT_LITERAL                                     # intLiteral
    | BOOLEAN_LITERAL                                 # boolLiteral
    | STRING_LITERAL                                  # stringLiteral
    | LPAREN expression RPAREN                        # parenExpr
    | expression binary_operator expression           # binaryExpr
    | INCREMENT expression                            # prefixIncrement
    | DECREMENT expression                            # prefixDecrement
    | expression INCREMENT                            # postfixIncrement
    | expression DECREMENT                            # postfixDecrement
    ;


binary_operator
    : AND
    | OR
    | '=='
    | '!='
    | '<'
    | '>'
    | '<='
    | '>='
    | '+'
    | '-'
    | '*'
    | '/'
    ;
forStatement
    : 'for' LPAREN forInit? SEMI forCondition? SEMI forUpdate? RPAREN block
    ;

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



ESC: '\\' [btnfr"'\\] ;
