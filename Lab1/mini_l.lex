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

//alphabet
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

//keywords
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
