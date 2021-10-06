SUB	[+]
ADD	[-]

%%
{ADD}	printf("This is an ADD: {%s}\n", yytext);
.	printf("");
%%

main() {
	printf("Give me your input\n");
	yylex();
}
