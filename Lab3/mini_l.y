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
	int a;

	struct {
		char* val;
	} term;
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

%type<term> prog_start
%type<term> functions
%type<term> function
%type<term> ident
%type<term> identifiers
%type<term> number
%type<term> declaration
%type<term> declarations
%type<term> statements
%type<term> statement	
%type<term> bool-exp
%type<term> relation-and-exp
%type<term> relation-exp
%type<term> comp
%type<term> expression
%type<term> expressions
%type<term> multiplicative-expression
%type<term> multiplicative-expressions
%type<term> term
%type<term> var
%type<term> vars

%%
prog_start:		functions	{printf("%s", $1.val);};

functions:	function functions 	{printf("functions -> function functions\n");}
			| /* empty */		{printf("functions -> epsilon\n");};

function:	FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY	{printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");};

ident:	IDENT {
                printf("ident -> IDENT %s\n", $1);
        };

identifiers:	ident	{printf("identifiers -> ident\n");}
				| ident COMMA identifiers	{printf("identifiers -> ident COMMA identifiers\n");}
				| /* empty */		{printf("prog_start -> epsilon\n");};

number:		NUMBER		{};;

declaration:	identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER	{printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
				| identifiers COLON INTEGER {printf("declaration -> identifiers COLON INTEGER\n");};

declarations: 	declaration SEMICOLON declarations	{printf("declarations -> declaration SEMICOLON declarations\n");}
				| /* empty */		{printf("declarations -> epsilon\n");};

statements:		/* empty */	{printf("statements -> epsilon\n");}
				| statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");};

statement:		var ASSIGN expression	{printf("statement -> var ASSIGN expression\n");}
				| IF bool-exp THEN statements ENDIF		{printf("statement -> IF bool_exp THEN statements ENDIF\n");}
				| IF bool-exp THEN statements ELSE statements ENDIF		{printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
				| WHILE bool-exp BEGINLOOP statements ENDLOOP	{printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
				| DO BEGINLOOP statements ENDLOOP WHILE bool-exp	{printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
				| READ vars	{printf("statement -> READ vars\n");}
				| WRITE vars	{printf("statement -> WRITE vars\n");}
				| CONTINUE		{printf("statement -> CONTINUE\n");}
				| RETURN expression		{printf("statement -> RETURN expression\n");};

bool-exp:		relation-and-exp	{printf("bool_exp -> relation_and_exp\n");}
				| relation-and-exp OR bool-exp	{printf("bool_exp -> relation_and_exp OR relation_and_exp\n");};

relation-and-exp:	relation-exp	{printf("relation_and_exp -> relation_exp\n");}
					| relation-exp AND relation-and-exp	{printf("relation_and_exp -> relation_exp AND relation_exp\n");};

relation-exp: 	expression comp expression	{printf("relation_exp -> expression comp expression\n");}
				| NOT expression comp expression	{printf("relation_exp -> NOT expression comp expression\n");}
				| TRUE		{printf("relation_exp -> TRUE\n");}
				| FALSE		{printf("relation_exp -> FALSE\n");}
				| NOT TRUE	{printf("relation_exp -> NOT TRUE\n");}
				| NOT FALSE	{printf("relation_exp -> NOT TRUE\n");}
				| L_PAREN bool-exp R_PAREN		{printf("relation_exp -> L_PAREN bool_exp R_PAREN");}
				| NOT L_PAREN bool-exp R_PAREN		{printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN");};

comp: 	EQ		{printf("comp -> EQ\n");}
		| NEQ	{printf("comp -> NEQ\n");}
		| LT	{printf("comp -> LT\n");}
		| GT	{printf("comp -> GT\n");}
		| LTE	{printf("comp -> LTE\n");}
		| GTE	{printf("comp -> GTE\n");};

expression:		multiplicative-expression	{printf("expression -> multiplicative_expression\n");}
				| multiplicative-expression ADD expression	{printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
				| multiplicative-expression SUB expression	{printf("expression -> multiplicative_expression SUB multiplicative_expression\n");};

expressions:	expression		{};
				| expression COMMA expressions	{};
				| /* empty */	{printf("expressions -> epsilon\n");};

multiplicative-expression:		term	{printf("multiplicative_expression -> term\n");}
								| term MOD multiplicative-expressions	{printf("multiplicative_expression -> term MOD term\n");}
								| term DIV multiplicative-expressions	{printf("multiplicative_expression -> term DIV term\n");}
								| term MULT multiplicative-expressions	{printf("multiplicative_expression -> term MULT term\n");};

multiplicative-expressions:		term	{}
								| term MOD multiplicative-expression	{printf("multiplicative_expression -> term MOD term\n");}
								| term DIV multiplicative-expression	{printf("multiplicative_expression -> term DIV term\n");}
								| term MULT multiplicative-expression	{printf("multiplicative_expression -> term MULT term\n");}
								| /* empty */	{}

term:	var	{printf("term -> var\n");}
		| ident L_PAREN expressions R_PAREN	{printf("term -> ident L_PAREN expressions R_PAREN term\n");}
		| NUMBER	{printf("term -> NUMBER\n");}
		| L_PAREN expression R_PAREN	{printf("term -> L_PAREN expression R_PAREN\n");}
		| ident L_PAREN R_PAREN		{printf("term -> ident L_PAREN R_PAREN\n");}
		| SUB L_PAREN expression R_PAREN %prec UNMINUS		{printf("term -> SUB L_PAREN expression R_PAREN\n");};

vars:	var		{printf("vars -> var\n");}
		| var COMMA vars	{printf("vars -> var COMMA vars\n");};

var:	ident	{printf("var -> ident\n");}
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET	{printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");};

%%

int yyerror(char *s)
{
  extern int line;
  printf("Error on line %d\n", line);
  return line;
}

char* tempvar() {
        static int n = 0;
        char* out = "__temp__" + to_string(n++);
        return out;
}
