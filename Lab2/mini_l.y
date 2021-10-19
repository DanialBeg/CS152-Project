%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union{
	int ival;
}

%left PLUS MULT DIV L_PAREN R_PAREN EQUAL MOD LT GT NEQ LTE GTE SEMICOLON COLON COMMA L_SQUARE_BRACKET R_SQUARE_BRACKET NEWLINE SPACE TAB
%right MINUS NOT ASSIGN
%token NUMBER FUNCTION IF ENDIF ELSE THEN RETURN BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY READ WRITE OF INTEGER OR TRUE FALSE DO BEGINLOOP ENDLOOP CONTINUE AND WHILE ARRAY UND COMMENT IDENT_ERROR_NUM IDENT_ERROR_F_UND IDENT_ERROR_B_UND IDENT ALL
%start expr

%%
expr: NUMBER expr
    | PLUS expr
    | MINUS expr
    | MULT expr
    | DIV expr
    | L_PAREN expr
    | R_PAREN expr
    | EQUAL expr
    | MOD expr
    | LT expr
    | GT expr
    | NEQ expr
    | LTE expr
    | GTE expr
    | SEMICOLON expr
    | COLON expr
    | COMMA expr
    | L_SQUARE_BRACKET expr
    | R_SQUARE_BRACKET expr
    | ASSIGN expr
    | NEWLINE expr
    | SPACE expr
    | TAB expr
    | FUNCTION expr
    | IF expr
    | ENDIF expr
    | ELSE expr
    | THEN expr
    | RETURN expr
    | BEGIN_PARAMS expr
    | END_PARAMS expr
    | BEGIN_LOCALS expr
    | END_LOCALS expr
    | BEGIN_BODY expr
    | END_BODY expr
    | READ expr
    | WRITE expr
    | OF expr
    | INTEGER expr
    | OR expr
    | TRUE expr
    | FALSE expr
    | DO expr
    | BEGINLOOP expr
    | ENDLOOP expr
    | CONTINUE expr
    | AND expr
    | WHILE expr
    | ARRAY expr
    | UND expr
    | COMMENT expr
    | IDENT_ERROR_NUM expr
    | IDENT_ERROR_F_UND expr
    | IDENT_ERROR_B_UND expr
    | IDENT expr
    | ALL expr
    | NOT expr
    |

;

%%

int main() {
	yyin = stdin;
    extern int NOT;
	extern int NUMBER;
	extern int PLUS;
	extern int MINUS;
	extern int MULT;
	extern int DIV;
	extern int L_PAREN;
	extern int R_PAREN;
	extern int EQUAL;
	extern int MOD; 
	extern int LT;
	extern int GT;
	extern int NEQ;
	extern int LTE; 
	extern int GTE;
	extern int SEMICOLON;
	extern int COLON;
	extern int COMMA;
	extern int L_SQUARE_BRACKET;
	extern int R_SQUARE_BRACKET;
	extern int ASSIGN;
	extern int NEWLINE;
	extern int SPACE;
	extern int TAB;
	extern int FUNCTION;
	extern int IF;
	extern int ENDIF;
	extern int ELSE;
	extern int THEN;
	extern int RETURN;
	extern int BEGIN_PARAMS;
	extern int END_PARAMS;
	extern int BEGIN_LOCALS;
	extern int END_LOCALS;
	extern int BEGIN_BODY;
	extern int END_BODY;
	extern int READ;
	extern int WRITE;
	extern int OF;
	extern int INTEGER;
	extern int OR;
	extern int TRUE;
	extern int FALSE;
	extern int DO;
	extern int BEGINLOOP;
	extern int ENDLOOP;
	extern int CONTINUE;
	extern int AND;
	extern int WHILE;
	extern int ARRAY;
	extern int UND;
	extern int COMMENT;
	extern int IDENT_ERROR_NUM;
	extern int IDENT_ERROR_F_UND;
	extern int IDENT_ERROR_B_UND;
	extern int IDENT;
	extern int ALL;
	do {
		printf("Parse.\n");
		yyparse();
	} while (!feof(yyin));
    	printf("NOT = %d\n", NOT);
	printf("NUMBER = %d\n", NUMBER);
	printf("PLUS = %d\n", PLUS);
	printf("MINUS = %d\n", MINUS);
	printf("MULT = %d\n", MULT);
	printf("DIV = %d\n", DIV);
	printf("L_PAREN = %d\n", L_PAREN);
	printf("R_PAREN = %d\n", R_PAREN);
	printf("EQUAL = %d\n", EQUAL);
	printf("MOD = %d\n", MOD);
	printf("LT = %d\n", LT);
	printf("GT = %d\n", GT);
	printf("NEQ = %d\n", NEQ);
	printf("LTE = %d\n", LTE);
	printf("GTE = %d\n", GTE);
	printf("SEMICOLON = %d\n", SEMICOLON);
	printf("COLON = %d\n", COLON);
	printf("COMMA = %d\n", COMMA);
	printf("L_SQUARE_BRACKET = %d\n", L_SQUARE_BRACKET);
	printf("R_SQUARE_BRACKET = %d\n", R_SQUARE_BRACKET);
	printf("ASSIGN = %d\n", ASSIGN);
	printf("NEWLINE = %d\n", NEWLINE);
	printf("SPACE = %d\n", SPACE);
	printf("TAB = %d\n", TAB);
	printf("FUNCTION = %d\n", FUNCTION);
	printf("IF = %d\n", IF);
	printf("ENDIF = %d\n", ENDIF);
	printf("ELSE = %d\n", ELSE);
	printf("THEN = %d\n", THEN);
	printf("RETURN = %d\n", RETURN);
	printf("BEGIN_PARAMS = %d\n", BEGIN_PARAMS);
	printf("END_PARAMS = %d\n", END_PARAMS);
	printf("BEGIN_LOCALS = %d\n", BEGIN_LOCALS);
	printf("END_LOCALS = %d\n", END_LOCALS);
	printf("BEGIN_BODY = %d\n", BEGIN_BODY);
	printf("END_BODY = %d\n", END_BODY);
	printf("READ = %d\n", READ);
	printf("WRITE = %d\n", WRITE);
	printf("OF = %d\n", OF);
	printf("INTEGER = %d\n", INTEGER);
	printf("OR = %d\n", OR);
	printf("TRUE = %d\n", TRUE);
	printf("FALSE = %d\n", FALSE);
	printf("DO = %d\n", DO);
	printf("BEGINLOOP = %d\n", BEGINLOOP);
	printf("ENDLOOP = %d\n", ENDLOOP);
	printf("CONTINUE = %d\n", CONTINUE);
	printf("AND = %d\n", AND);
	printf("WHILE = %d\n", WHILE);
	printf("ARRAY = %d\n", ARRAY);
	printf("UND = %d\n", UND);
	printf("COMMENT = %d\n", COMMENT);
	printf("IDENT_ERROR_NUM = %d\n", IDENT_ERROR_NUM);
	printf("IDENT_ERROR_F_UND = %d\n", IDENT_ERROR_F_UND);
	printf("IDENT_ERROR_B_UND = %d\n", )IDENT_ERROR_B_UND;
	printf("IDENT = %d\n", IDENT);
	printf("ALL = %d\n", ALL);
	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s, Invalid token!\n", s);
	exit(1);
}
