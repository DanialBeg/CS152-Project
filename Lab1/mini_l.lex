NUMBER	[0-9]
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

A	[a]
B	[b]
C	[c]
D	[d]
E	[e]
F	[f]
G	[g]
H	[h]
I	[i]
J	[j]
K	[k]
L	[l]
M	[m]
N	[n]
O	[o]
P	[p]
Q	[q]
R	[r]
S	[s]
T	[t]
U	[u]
V	[v]
W	[w]
X	[x]
Y	[y]
Z	[z]

FUNCTION	({F}{U}{N}{C}{T}{I}{O}{N})
IF		({I}{F})
ENDIF		({E}{N}{D}{I}{F})
ELSE		({E}{L}{S}{E})
THEN		({T}{H}{E}{N})
RETURN		({R}{E}{T}{U}{R}{N})
BEGIN_PARAMS	({B}{E}{G}{I}{N}{P}{A}{R}{A}{M}{S})
END_PARAMS	({E}{N}{D}{P}{A}{R}{A}{M}{S})
BEGIN_LOCALS	({B}{E}{G}{I}{N}{L}{O}{C}{A}{L}{S})
END_LOCALS	({E}{N}{D}{L}{O}{C}{A}{L}{S})
BEGIN_BODY	({B}{E}{G}{I}{N}{B}{O}{D}{Y})
END_BODY	({E}{N}{D}{B}{O}{D}{Y})
READ		({R}{E}{A}{D})
WRITE		({W}{R}{I}{T}{E})
OF		({O}{F})
INTEGER		({I}{N}{T}{E}{G}{E}{R})
OR		({O}{R})
TRUE		({T}{R}{U}{E})
FALSE		({F}{A}{L}{S}{E})
DO		({D}{O})
BEGINLOOP	({B}{E}{G}{I}{N}{L}{O}{O}{P})
ENDLOOP		({E}{N}{D}{L}{O}{O}{P})
CONTINUE	({C}{O}{N}{T}{I}{N}{U}{E})
AND		({A}{N}{D})
WHILE		({W}{H}{I}{L}{E})
ARRAY		({A}{R}{R}{A}{Y})


%%
{EQ}		printf("EQUALS: {%s}\n", yytext);
{ADD}		printf("ADD: {%s}\n", yytext);
{NEQ}		printf("NEQ: {%s}\n", yytext);
{GTE}		printf("GTE: {%s}\n", yytext);
{GT}		printf("GT: {%s}\n", yytext);
{ASSIGN}	printf("ASSIGN: {%s}\n", yytext);
{COLON}		printf("COLON: {%s}\n", yytext);

{FUNCTION}	printf("FUNCTION: {%s}\n", yytext);
{IF}		printf("IF: {%s}\n", yytext);
{ENDIF}		printf("ENDIF: {%s}\n", yytext);
{ELSE}		printf("ELSE: {%s}\n", yytext);
{THEN}		printf("THEN: {%s}\n", yytext);
{RETURN}	printf("RETURN: {%s}\n", yytext);
{BEGIN_PARAMS}	printf("BEGINPARAMS: {%s}\n", yytext);
{END_PARAMS}	printf("ENDPARAMS: {%s}\n", yytext);
{BEGIN_LOCALS}	printf("BEGINLOCALS: {%s}\n", yytext);
{END_LOCALS}	printf("ENDLOCALS: {%s}\n", yytext);
{BEGIN_BODY}	printf("BEGINBODY: {%s}\n", yytext);
{END_BODY}	printf("ENDBODY: {%s}\n", yytext);
{READ}		printf("READ: {%s}\n", yytext);
{WRITE}		printf("WRITE: {%s}\n", yytext);
{OF}		printf("OF: {%s}\n", yytext);
{INTEGER}	printf("INTEGER: {%s}\n", yytext);
{OR}		printf("OR: {%s}\n", yytext);
{TRUE}		printf("TRUE: {%s}\n", yytext);
{FALSE}		printf("FALSE: {%s}\n", yytext);
{DO}		printf("DO: {%s}\n", yytext);
{BEGINLOOP}	printf("BEGINLOOP: {%s}\n", yytext);
{ENDLOOP}	printf("ENDLOOP: {%s}\n", yytext);
{CONTINUE}	printf("CONTINUE: {%s}\n", yytext);
{AND}		printf("AND: {%s}\n", yytext);
{WHILE}		printf("WHILE: {%s}\n", yytext);
{ARRAY}		printf("ARRAY: {%s}\n", yytext);
.	printf("");
%%

main() {
	printf("Give me your input\n");
	yylex();
}
