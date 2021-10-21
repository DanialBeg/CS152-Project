%{
#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yyerror(char *s);
int yylex(void);
extern FILE* yyin;
%}

%union{
	int ival;
	char* label;
	int n;
}

%start prog_start
%token FUNCTION IF ENDIF ELSE THEN RETURN BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY SEMICOLON COLON COMMA READ WRITE OF INTEGER OR TRUE FALSE DO BEGINLOOP ENDLOOP CONTINUE WHILE ARRAY UND COMMENT
%token <label> IDENT
%token <n> NUMBER
%right ASSIGN
%left OR
%left AND
%right NOT
%left LT GT EQ NEQ LTE GTE
%left ADD SUB
%left MULT DIV MOD
%right UNMINUS
%left L_SQUARE_BRACKET R_SQUARE_BRACKET
%left L_PAREN R_PAREN

%%
prog_start:		function prog_start	{printf("prog_start -> functions beg\n");}
				| /* empty */		{printf("prog_start -> epsilon\n");}
;

function:	FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY	{printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");};

ident:	IDENT {printf("ident -> IDENT%s\n", $1);};

identifiers:	ident	{printf("identifiers -> ident\n");}
				| identifiers COMMA identifiers	{printf("identifiers -> ident COMMA identifiers\n");}
;

number:		NUMBER	{printf("number -> NUMBER%d\n", $1);};

declaration:	identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER	{printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
				| identifiers COLON INTEGER {printf("declaration -> identifiers COLON INTEGER\n");}
;

declarations: 	/* empty */		{printf("declarations -> epsilon\n");}
				| declaration SEMICOLON declarations	{printf("declarations -> declaration SEMICOLON declarations\n");}
;

statements:		/* empty */	{printf("statements -> epsilon\n");}
				| statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");}
;

statement:		var ASSIGN expression	{printf("var ASSIGN expression\n");}
				| CONTINUE		{printf("statement -> CONTINUE\n");}
				| IF bool-exp THEN statements ENDIF		{printf("statement -> IF bool_exp THEN statements ENDIF\n");}
				| WRITE vars	{printf("statement -> WRITE vars\n");}
				| READ vars	{printf("statement -> READ vars\n");}
				| DO BEGINLOOP statements ENDLOOP WHILE bool-exp	{printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
				| WHILE bool-exp BEGINLOOP statements ENDLOOP	{printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
				| IF bool-exp THEN statements ELSE statements ENDIF		{printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
				| RETURN expression		{printf("statement -> RETURN expression\n");}
;

bool-exp:		relation-and-exp	{printf("bool_exp -> relation_and_exp\n");}
				| relation-and-exp OR relation-and-exp		{printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
;

relation-and-exp:	relation-exp	{printf("relation_and_exp -> relation_exp\n");}
					| relation-exp AND relation-exp	{printf("relation_and_exp -> relation_exp AND relation_exp\n");}
;

relation-exp: 	expression comp expression	{printf("relation_exp -> expression comp expression\n");}
				| FALSE		{printf("relation_exp -> FALSE\n");}
				| TRUE		{printf("relation_exp -> TRUE\n");}
;

comp: 	EQ		{printf("comp -> EQ\n");}
		| LT	{printf("comp -> LT\n");}
		| GT	{printf("comp -> GT\n");}
		| LTE	{printf("comp -> LTE\n");}
		| GTE	{printf("comp -> GTE\n");}
;

expression:		multiplicative-expression	{printf("expression -> multiplicative_expression\n");}
				| multiplicative-expression ADD multiplicative-expression	{printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
				| multiplicative-expression SUB multiplicative-expression	{printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
;

multiplicative-expression:		term	{printf("multiplicative_expression -> term\n");}
								term MOD term	{printf("multiplicative_expression -> term MOD term\n");}
								term DIV term	{printf("multiplicative_expression -> term DIV term\n");}
								term MULT term	{printf("multiplicative_expression -> term MULT term\n");}
;

term:	var	{printf("term -> var\n");}
		| number	{printf("term -> NUMBER\n");}
		| L_PAREN expression R_PAREN	{printf("term -> L_PAREN expression R_PAREN\n");}
;

vars:	var		{printf("vars -> var\n");}
		| var COMMA vars	{printf("vars -> var COMMA vars\n");}
;

var:	ident	{printf("var -> ident\n");}
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET	{printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}

%%

int yyerror(char *s)
{
  extern int line;
  printf("ERROR at symbol %s on line %d\n", s, line);
}
