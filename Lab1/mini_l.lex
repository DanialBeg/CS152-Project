NUMBER			[0-9]
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
TEST	"TEST"

FUNCTION		"function"
IF				"if"
ENDIF			"endif"
ELSE			"else"
THEN			"then"
RETURN			"return"
BEGIN_PARAMS	"beginparams"
END_PARAMS		"endparams"
BEGIN_LOCALS		"beginlocals"
END_LOCALS		"endlocals"
BEGIN_BODY		"beginbody"
END_BODY		"endbody"
READ			"read"
WRITE			"write"
OF				"of"
INTEGER			"integer"
OR				"or"
TRUE			"true"
FALSE			"false"
DO				"do"
BEGINLOOP		"beginloop"
ENDLOOP			"endloop"
CONTINUE		"continue"
AND				"and"
WHILE			"while"
ARRAY			"array"

IDENT 			[^(FUNCTION | IF | ENDIF | ELSE | THEN | RETURN | BEGIN_PARAMS | END_PARAMS | BEGIN_LOCALS | END_LOCALS | BEGIN_BODY | END_BODY | READ | WRITE | OF | INTEGER | OR | TRUE | FALSE | DO | BEGINLOOP | ENDLOOP | CONTINUE | AND | WHILE | ARRAY | \t | \n)]

%%
{NUMBER}		printf("NUMBER: {%s}\n", yytext);
{SUB}			printf("SUB: {%s}\n", yytext);
{ADD}			printf("ADD: {%s}\n", yytext);
{MULT}			printf("MULT: {%s}\n", yytext);
{DIV}			printf("DIV: {%s}\n", yytext);
{MOD}			printf("MOD: {%s}\n", yytext);
{EQ}			printf("EQ: {%s}\n", yytext);
{LT}			printf("LT: {%s}\n", yytext);
{GT}			printf("GT: {%s}\n", yytext);
{NEQ}			printf("NEQ: {%s}\n", yytext);
{LTE}			printf("LTE: {%s}\n", yytext);
{GTE}			printf("GTE: {%s}\n", yytext);
{SEMICOLON}		printf("SEMICOLON: {%s}\n", yytext);
{COLON}			printf("COLON: {%s}\n", yytext);
{COMMA}			printf("COMMA: {%s}\n", yytext);
{L_PAREN}		printf("L_PAREN: {%s}\n", yytext);
{R_PAREN}		printf("R_PAREN: {%s}\n", yytext);
{L_SQUARE_BRACKET}	printf("L_SQUARE_BRACKET: {%s}\n", yytext);
{R_SQUARE_BRACKET}	printf("R_SQUARE_BRACKET: {%s}\n", yytext);
{ASSIGN}		printf("ASSIGN: {%s}\n", yytext);

{FUNCTION}		printf("FUNCTION: {%s}\n", yytext);
{IF}			printf("IF: {%s}\n", yytext);
{ENDIF}			printf("ENDIF: {%s}\n", yytext);
{ELSE}			printf("ELSE: {%s}\n", yytext);
{THEN}			printf("THEN: {%s}\n", yytext);
{RETURN}		printf("RETURN: {%s}\n", yytext);
{BEGIN_PARAMS}		printf("BEGINPARAMS: {%s}\n", yytext);
{END_PARAMS}		printf("ENDPARAMS: {%s}\n", yytext);
{BEGIN_LOCALS}		printf("BEGINLOCALS: {%s}\n", yytext);
{END_LOCALS}		printf("ENDLOCALS: {%s}\n", yytext);
{BEGIN_BODY}		printf("BEGINBODY: {%s}\n", yytext);
{END_BODY}		printf("ENDBODY: {%s}\n", yytext);
{READ}			printf("READ: {%s}\n", yytext);
{WRITE}			printf("WRITE: {%s}\n", yytext);
{OF}			printf("OF: {%s}\n", yytext);
{INTEGER}		printf("INTEGER: {%s}\n", yytext);
{OR}			printf("OR: {%s}\n", yytext);
{TRUE}			printf("TRUE: {%s}\n", yytext);
{FALSE}			printf("FALSE: {%s}\n", yytext);
{DO}			printf("DO: {%s}\n", yytext);
{BEGINLOOP}		printf("BEGINLOOP: {%s}\n", yytext);
{ENDLOOP}		printf("ENDLOOP: {%s}\n", yytext);
{CONTINUE}		printf("CONTINUE: {%s}\n", yytext);
{AND}			printf("AND: {%s}\n", yytext);
{WHILE}			printf("WHILE: {%s}\n", yytext);
{ARRAY}			printf("ARRAY: {%s}\n", yytext);
{IDENT}			printf("IDENT: {%s}\n", yytext);
.			printf("");


%%

main() {
	printf("Give me your input\n");
	yylex();
}
