SUB	[-]
ADD	[+]
MULT	[*]
DIV	[/]
MOD	[%]
EQ	[=]{2}
LT	[<]
GT	[>]
NEQ	({LT}{GT})
LTE	({LT}[=])
GTE	({GT}[=])
SEMICOLON	[;]
COLON	[:]
COMMA	[,]
L_PAREN	[(]
R_PAREN	[)]
L_SQUARE_BRACKET	[[]
R_SQUARE_BRACKET	[]]
ASSIGN	({COLON}[=])

%%
{EQ}	printf("This is an EQUALS: {%s}\n", yytext);
{ADD}	printf("This is an ADD: {%s}\n", yytext);
{NEQ}	printf("This is a NEQ: {%s}\n", yytext);
{GTE}	printf("This is a GTE: {%s}\n", yytext);
{GT}	printf("This is a GT: {%s}\n", yytext);
{ASSIGN}	printf("This is an ASSIGN: {%s}\n", yytext);
{COLON}	printf("This is a COLON: {%s}\n", yytext);
.	printf("");
%%

main() {
	printf("Give me your input\n");
	yylex();
}
