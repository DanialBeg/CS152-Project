%option noyywrap
%{   
#include<string.h>
#include "phase2.tab.h"
   int currLine = 1, currPos = 1;
   
   extern char *identToken;
   extern int numberToken;
%}

DIGIT    [0-9]
LETTER   [a-zA-Z]
   
%%

function       {currPos += yyleng; return FUNCTION;}
beginparams    {currPos += yyleng; return BEGIN_PARAMS;}
endparams      {currPos += yyleng; return END_PARAMS;}
beginlocals    {currPos += yyleng; return BEGIN_LOCALS;}
endlocals      {currPos += yyleng; return END_LOCALS;}
beginbody      {currPos += yyleng; return BEGIN_BODY;}
endbody        {currPos += yyleng; return END_BODY;}
integer        {currPos += yyleng; return INTEGER;}
array          {currPos += yyleng; return ARRAY;}
of             {currPos += yyleng; return OF;}
if             {currPos += yyleng; return IF;}
then           {currPos += yyleng; return THEN;}
endif          {currPos += yyleng; return ENDIF;}
else           {currPos += yyleng; return ELSE;}
while          {currPos += yyleng; return WHILE;}
do             {currPos += yyleng; return DO;}
beginloop      {currPos += yyleng; return BEGINLOOP;}
endloop        {currPos += yyleng; return ENDLOOP;}
read           {currPos += yyleng; return READ;}
write          {currPos += yyleng; return WRITE;}
and            {currPos += yyleng; return AND;}
or             {currPos += yyleng; return OR;}
not            {currPos += yyleng; return NOT;}
true           {currPos += yyleng; return TRUE;}
false          {currPos += yyleng; return FALSE;}
return         {currPos += yyleng; return RETURN;}
"-"            {currPos += yyleng; return SUB;}
"+"            {currPos += yyleng; return ADD;}
"*"            {currPos += yyleng; return MULT;}
"/"            {currPos += yyleng; return DIV;}
"%"            {currPos += yyleng; return MOD;}
"=="           {currPos += yyleng; return EQ;}
"<>"           {currPos += yyleng; return NEQ;}
"<"            {currPos += yyleng; return LT;}
">"            {currPos += yyleng; return GT;}
"<="           {currPos += yyleng; return LTE;}
">="           {currPos += yyleng; return GTE;}
";"            {currPos += yyleng; return SEMICOLON;}
":"            {currPos += yyleng; return COLON;}
","            {currPos += yyleng; return COMMA;}
"("            {currPos += yyleng; return L_PAREN;}
")"            {currPos += yyleng; return R_PAREN;}
"["            {currPos += yyleng; return L_SQUARE_BRACKET;}
"]"            {currPos += yyleng; return R_SQUARE_BRACKET;}
":="           {currPos += yyleng; return ASSIGN;}
"continue"     {currPos += yyleng; return CONTINUE;}

{DIGIT}+       {
  currPos += yyleng; 
  char * token = malloc(sizeof(char) * yyleng);
  strcpy(token, yytext);
  yylval.op_val = token;
  numberToken = atoi(yytext); 
  return NUMBER;
}

##(.)*\n       {/* do not print comments */ currLine++; currPos = 1;}

[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1;}

({LETTER})|({LETTER}({LETTER}|{DIGIT}|"_")*({LETTER}|{DIGIT}))     {
   currPos += yyleng;
   char * token = malloc(sizeof(char) * yyleng);
   strcpy(token, yytext);
   yylval.op_val = token;
   identToken = yytext; 
   return IDENT;
}

((("_")+)|(({DIGIT})+({LETTER}|"_")))({DIGIT}|{LETTER}|"_")*                { printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}

({LETTER})({DIGIT}|{LETTER}|"_")*("_")                                       {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(0);}


.   {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%



