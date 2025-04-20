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

statement: assignment_statement | if_statement | while_statement | return_statement | expression_statement ;

assignment_statement: IDENTIFIER ASSIGN expression SEMI ;

if_statement: IF LPAREN expression RPAREN block (ELSE block)? ;

while_statement: WHILE LPAREN expression RPAREN block ;

return_statement: RETURN expression? SEMI ;

expression_statement: expression SEMI ;

expression: IDENTIFIER
          | INT_LITERAL
          | BOOLEAN_LITERAL
          | STRING_LITERAL
          | '(' expression ')'
          | expression binary_operator expression ;

binary_operator: AND | OR | '==' | '!=' | '<' | '>' | '<=' | '>=' ;

ESC: '\\' [btnfr"'\\] ;
