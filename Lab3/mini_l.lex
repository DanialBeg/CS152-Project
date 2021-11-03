%option noyywrap

%{
#include <stdio.h>
#include "y.tab.h"
int line = 1;
int c = 0;
%}

digit [0-9]
number {digit}+
comment			(#{2}.*\n)
id			[a-z][a-z0-9_]*
IDENT_ERROR_NUM		[0-9]+[a-z0-9_]*
IDENT_ERROR_F_UND	[_]+[a-z0-9_]*
IDENT_ERROR_B_UND	[a-z][a-z0-9_]*[_]
spaces  [" "]+
tabs    ["\t"]+
newline ["\n"]

%%
"("     {return L_PAREN;}
"/n"    {line = line + 1;}
")"     {return R_PAREN;}
"=="     {return EQ;}
"+"     {return ADD;}
"-"     {return SUB;}
"*"     {return MULT;}
"/"     {return DIV;}
"%"     {return MOD;}
"<"     {return LT;}
">"     {return GT;}
"<>"     {return NEQ;}
"<="     {return LTE;}
">="     {return GTE;}
";"     {return SEMICOLON;}
":"     {return COLON;}
","     {return COMMA;}
"["     {return L_SQUARE_BRACKET;}
"]"     {return R_SQUARE_BRACKET;}
""     {return NOT;}
":="     {return ASSIGN;}
"function"     return FUNCTION;
"if"     {return IF;}
"endif"     {return ENDIF;}
"else"     {return ELSE;}
"then"     {return THEN;}
"return"     {return RETURN;}
"beginparams"     {return BEGIN_PARAMS;}
"endparams"     {return END_PARAMS;}
"beginlocals"     {return BEGIN_LOCALS;}
"endlocals"     {return END_LOCALS;}
"beginbody"     {return BEGIN_BODY;}
"endbody"     {return END_BODY;}
"read"     {return READ;}
"write"     {return WRITE;}
"of"     {return OF;}
"integer"     {return INTEGER;}
"or"     {return OR;}
"true"     {return TRUE;}
"false"     {return FALSE;}
"do"     {return DO;}
"beginloop"     {return BEGINLOOP;}
"endloop"     {return ENDLOOP;}
"continue"     {return CONTINUE;}
"and"     {return AND;}
"while"     {return WHILE;}
"array"     {return ARRAY;}
"_"     {return UND;}
{comment}     {line++;}
{number}   {yylval.ival = atoi(yytext); return NUMBER;}
{spaces}        {}
{tabs}          {}
{newline}       {line++;}
{IDENT_ERROR_NUM}   {printf("Error on line %d: identifier \"%s\" must begin with letter\n", line, yytext); exit(1);}
{IDENT_ERROR_F_UND}	{printf("Error on line %d: identifier \"%s\" must begin with letter\n", line, yytext); exit(1);}
{IDENT_ERROR_B_UND}	{printf("Error on line %d: identifier \"%s\" cannot end with underscore\n", line, yytext); exit(1);}
{id}			{yylval.label = strdup(yytext); return IDENT;}
%%

int main(int argc, char **argv)
{
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL))
  {
    printf("File cannot be opened\n");
    exit( 1 );
  }
  
  yyparse();

  return 0;
}
