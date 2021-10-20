%option noyywrap

%{
#include <stdio.h>

#define YY_DECL int yylex()

#include "calc.tab.h"
int number = 0;
int lp = 0;
int rp = 0;
int eq = 0;
int plus = 0;
int minus = 0;
int mult = 0;
int div_n = 0;
int mod = 0;
int lt = 0; 
int gt = 0; 
int neq = 0; 
int lte = 0; 
int gte = 0; 
int semicolon = 0; 
int colon = 0; 
int comma = 0; 
int l_square_bracket = 0; 
int r_square_bracket = 0; 
int newline = 0; 
int space = 0; 
int tab = 0;
int not = 0; 
int assign = 0;
int function = 0; 
int if = 0; 
int endif = 0; 
int else = 0; 
int then = 0; 
int return = 0; 
int begin_params = 0; 
int end_params = 0; 
int begin_locals = 0; 
int end_locals = 0; 
int begin_body = 0; 
int end_body = 0; 
int read = 0; 
int write = 0; 
int of = 0; 
int integer = 0; 
int or = 0; 
int true = 0; 
int false = 0; 
int do = 0; 
int beginloop = 0; 
int endloop = 0; 
int continue = 0; 
int and = 0; 
int while = 0; 
int array = 0; 
int und = 0; 
int comment = 0; 
int ident_error_num = 0;
int ident_error_f_und = 0; 
int ident_error_b_und = 0; 
int ident = 0; 
int all = 0;
%}

digit [0-9]
number {digit}+
comment			(#{2}.*\n)
ident_error_num		([0-9]+[a-z0-9_]*)
ident_error_f_und	([_]+[a-z0-9_]*)
ident_error_b_und	([a-z][a-z0-9_]*[_])
ident			([a-z][a-z0-9_]*)
newline			("\n")
space			(" "+)
tab			("\t"+)
all			(.)

%%
{tab}   ; // ignore all whitespace
{newline}    {newline++; return NEWLINE;}
{space}     {space++; return SPACE;}
"("     {lp++; return L_PAREN;}
")"     {rp++; return R_PAREN;}
"=="     {eq++; return EQ;}
"+"     {plus++; return PLUS;}
"-"     {minus++; return MINUS;}
"*"     {mult++; return MULT;}
"/"     {div_n++; return DIV;}
"%"     {mod++; return MOD;}
"<"     {lt++; return LT;}
">"     {gt++; return GT;}
"<>"     {neq++; return NEQ;}
"<="     {lte++; return LTE;}
">="     {gte++; return GTE;}
";"     {semicolon++; return SEMICOLON;}
":"     {colon++; return COLON;}
","     {comma++; return COMMA;}
"["     {l_square_bracket++; return L_SQUARE_BRACKET;}
"]"     {r_square_bracket++; return R_SQUARE_BRACKET;}
""     {not++; return NOT;}
":="     {assign++; return ASSIGN;}
"function"     {function++; return FUNCTION;}
"if"     {if++; return IF;}
"endif"     {endif++; return ENDIF;}
"else"     {else++; return ELSE;}
"then"     {then++; return THEN;}
"return"     {return++; return RETURN;}
"beginparams"     {begin_params++; return BEGIN_PARAMS;}
"endparams"     {end_params++; return END_PARAMS;}
"beginlocals"     {begin_locals++; return BEGIN_LOCALS;}
"endlocals"     {end_locals++; return END_LOCALS;}
"beginbody"     {begin_body++; return BEGIN_BODY;}
"endbody"     {end_body++; return END_BODY;}
"read"     {read++; return READ;}
"write"     {write++; return WRITE;}
"of"     {of++; return OF;}
"integer"     {integer++; return INTEGER;}
"or"     {or++; return OR;}
"true"     {true++; return TRUE;}
"false"     {false++; return FALSE;}
"do"     {do++; return DO;}
"beginloop"     {beginloop++; return BEGINLOOP;}
"endloop"     {endloop++; return ENDLOOP;}
"continue"     {continue++; return CONTINUE;}
"and"     {and++; return AND;}
"while"     {while++; return WHILE;}
"array"     {array++; return ARRAY;}
"_"     {und++; return UND;}
{comment}     {comment++; return COMMENT;}
{ident_error_num}     {ident_error_num++; return IDENT_ERROR_NUM;}
{ident_error_f_und}     {ident_error_f_und++; return IDENT_ERROR_F_UND;}
{ident_error_b_und}     {ident_error_b_und++; return IDENT_ERROR_B_UND;}
{ident}     {ident++; return IDENT;}
{all}     {all++; return ALL;}
{number}   {number++; return NUMBER;}
%%
