%option noyywrap

%{
#include <stdio.h>

#define YY_DECL int yylex()

#include "calc.tab.h"
int num_val = 0;
int lp = 0;
int rp = 0;
int eq = 0;
int plus = 0;
int minus = 0;
int mult = 0;
int div_n = 0;
%}

digit [0-9]
plus [+]
minus [-]
mult [*]
div [/]
l_paren [(]
r_paren [)]
equal [=]
num {digit}+

%%
[ \t]   ; // ignore all whitespace
"("             {lp++; return LEFT_PAREN;}
")"             {rp++; return RIGHT_PAREN;}
"="     {eq++; return EQUAL;}
"+"     {plus++; return PLUS;}
"-"     {minus++; return MINUS;}
"*"     {mult++; return MULT;}
"/"     {div_n++; return DIV;}
{num}   {num_val++; return VALS;}
%%
