NUMBER			[0-9]+
SUB			[-]
ADD			[+]
MULT			[*]
DIV			[/]
MOD			[%]
EQ			[=]{2}
LT			[<]
GT			[>]
NEQ			({LT}{GT})
LTE			({LT}[=])
GTE			({GT}[=])
SEMICOLON		[;]
COLON			[:]
COMMA			[,]
L_PAREN			[(]
R_PAREN			[)]
L_SQUARE_BRACKET	[[]
R_SQUARE_BRACKET	[]]
ASSIGN			({COLON}[=])
NEWLINE			("\n")+
SPACE			(" "+)
TAB			("\t"+)
FUNCTION		"function"
IF			"if"
ENDIF			"endif"
ELSE			"else"
THEN			"then"
RETURN			"return"
BEGIN_PARAMS		"beginparams"
END_PARAMS		"endparams"
BEGIN_LOCALS		"beginlocals"
END_LOCALS		"endlocals"
BEGIN_BODY		"beginbody"
END_BODY		"endbody"
READ			"read"
WRITE			"write"
OF			"of"
INTEGER			"integer"
OR			"or"
TRUE			"true"
FALSE			"false"
DO			"do"
BEGINLOOP		"beginloop"
ENDLOOP			"endloop"
CONTINUE		"continue"
AND			"and"
WHILE			"while"
ARRAY			"array"
UND			"_"
COMMENT			(#{2}.*\n)
IDENT_ERROR_NUM		([0-9]+[a-z0-9_]*)
IDENT_ERROR_F_UND	([_]+[a-z0-9_]*)
IDENT_ERROR_B_UND	([a-z][a-z0-9_]*[_])
IDENT			([a-z][a-z0-9_]*)
ALL			(.)

%{
int line_c = 1;
int char_c = 1;
%}

%%
{NUMBER}		printf("NUMBER %s\n", yytext, char_c += strlen(yytext));
{SUB}			printf("SUB\n", char_c += 1);
{ADD}			printf("ADD\n", char_c += 1);
{MULT}			printf("MULT\n", char_c += 1);
{DIV}			printf("DIV\n", char_c += 1);
{MOD}			printf("MOD\n", char_c += 1);
{EQ}			printf("EQ\n", char_c += 2);
{LT}			printf("LT\n", char_c += 1);
{GT}			printf("GT\n", char_c += 1);
{NEQ}			printf("NEQ\n", char_c += 2);
{LTE}			printf("LTE\n", char_c += 2);
{GTE}			printf("GTE\n", char_c += 2);
{SEMICOLON}		printf("SEMICOLON\n", char_c += 1);
{COLON}			printf("COLON\n", char_c += 1);
{COMMA}			printf("COMMA\n", char_c += 1);
{L_PAREN}		printf("L_PAREN\n", char_c += 1);
{R_PAREN}		printf("R_PAREN\n", char_c += 1);
{L_SQUARE_BRACKET}	printf("L_SQUARE_BRACKET\n", char_c += 1);
{R_SQUARE_BRACKET}	printf("R_SQUARE_BRACKET\n", char_c += 1);
{ASSIGN}		printf("ASSIGN\n", char_c += 2);
{FUNCTION}		printf("FUNCTION\n", char_c += 8);
{IF}			printf("IF\n", char_c += 2);
{ENDIF}			printf("ENDIF\n", char_c += 5);
{ELSE}			printf("ELSE\n", char_c += 4);
{THEN}			printf("THEN\n", char_c += 4);
{RETURN}		printf("RETURN\n", char_c += 6);
{BEGIN_PARAMS}		printf("BEGIN_PARAMS\n", char_c += 11);
{END_PARAMS}		printf("END_PARAMS\n", char_c += 9);
{BEGIN_LOCALS}		printf("BEGIN_LOCALS\n", char_c += 11);
{END_LOCALS}		printf("END_LOCALS\n", char_c += 9);
{BEGIN_BODY}		printf("BEGIN_BODY\n", char_c += 9);
{END_BODY}		printf("END_BODY\n", char_c += 7);
{READ}			printf("READ\n", char_c += 4);
{WRITE}			printf("WRITE\n", char_c += 5);
{OF}			printf("OF\n", char_c += 2);
{INTEGER}		printf("INTEGER\n", char_c += 7);
{OR}			printf("OR\n", char_c += 2);
{TRUE}			printf("TRUE\n", char_c += 4);
{FALSE}			printf("FALSE\n", char_c += 5);
{DO}			printf("DO\n", char_c += 2);
{BEGINLOOP}		printf("BEGINLOOP\n", char_c += 9);
{ENDLOOP}		printf("ENDLOOP\n", char_c += 7);
{CONTINUE}		printf("CONTINUE\n", char_c += 8);
{AND}			printf("AND\n", char_c += 3);
{WHILE}			printf("WHILE\n", char_c += 5);
{ARRAY}			printf("ARRAY\n", char_c += 5);
{COMMENT}		printf("");
{NEWLINE}		printf("", line_c++, char_c = 1);
{SPACE}			printf("", char_c += 1);
{TAB}			printf("", char_c += 1);
{IDENT_ERROR_B_UND}	printf("Error at line %d, column %d: identifier \"%s\" cannot end with underscore\n", line_c, char_c, yytext); exit(1);
{IDENT_ERROR_NUM}	printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", line_c, char_c, yytext); exit(1);
{IDENT_ERROR_F_UND}	printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", line_c, char_c, yytext); exit(1);
{IDENT}			printf("IDENT %s\n", yytext, char_c += strlen(yytext));
{ALL}			printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", line_c, char_c, yytext); exit(1);


%%

main() {
	yylex();
}
