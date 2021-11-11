%{
   #include<stdlib.h>
   #include<stdio.h>
   #include<string.h>
   void yyerror(const char *msg);
   extern int currLine;
   int myError = 0;
   int otherError = 0;
   
   char *identToken;
   char funcmain[] = "main";
   int numberToken;
   int productionID = 0;

   char list_of_function_names[100][100];
   int  count_names = 0;

//#define YYDEBUG 1
//yydebug=1;
%}

%union {
  char *op_val;
  int int_val;
}

%type <op_val> var
%type <op_val> ident
%type <op_val> expression
%type <op_val> multiplicative_expression
%type <op_val> term
%start prog_start
%token BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token FUNCTION RETURN MAIN
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token INTEGER ARRAY OF
%token IF THEN ENDIF ELSE
%token WHILE DO BEGINLOOP ENDLOOP  CONTINUE
%token READ WRITE
%token AND OR NOT TRUE FALSE
%token SUB ADD MULT DIV MOD
%token EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN ASSIGN
%token <op_val> NUMBER 
%token <op_val> IDENT

%%

prog_start: 
	functions
		{};

functions: 
	/* epsilon */
		{}
	| function functions
		{};

function: function_ident
	SEMICOLON
	BEGIN_PARAMS declarations END_PARAMS
	BEGIN_LOCALS declarations END_LOCALS
	BEGIN_BODY statements end_body 
{

};

end_body: END_BODY {
   printf("endfunc\n");
}

function_ident: FUNCTION ident {

     char *token = identToken;
	 if (strcmp(token,funcmain)) { exit(0); }
     printf("func %s\n", token);
     strcpy(list_of_function_names[count_names], token);
     count_names++;
}



ident:
	IDENT
		{ $$ = $1; };

declarations: 
	/* epsilon */
		{}
	| declaration SEMICOLON declarations
		{};

declaration: 
	IDENT COLON INTEGER
{

       char *token = $1;
       printf(". %s\n", token);

}
	| IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		{
			char *token = $1;
       		printf(".[] %s, %s\n", token, $5);
		};

statement: 
	var ASSIGN expression
{
	char *dest = $1;
	char *src  = $3;
	//printf(". __temp__%d\n", productionID);
	//printf(". __temp__%d, %s\n", productionID, src);
	printf("= %s, __temp__%d\n", dest, productionID-1);
	//productionID = productionID + 1;

}
	| IF bool_exp THEN statements ENDIF
		{}
	| IF bool_exp THEN statements ELSE statements ENDIF
		{}
	| WHILE bool_exp BEGINLOOP statements ENDLOOP
		{}
	| DO BEGINLOOP statements ENDLOOP WHILE bool_exp
		{}
	| READ vars
		{}
	| WRITE vars
		{}
	| CONTINUE
		{}
	| RETURN expression
		{};
	
statements: 
	statement SEMICOLON/* epsilon */
		{}
	| statement SEMICOLON statements
		{};

expression: 
	multiplicative_expression
{$$ = $1; }
	| multiplicative_expression ADD expression
{     
	char *src1 =  $1;
	char *src2 =  $3;
	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("+ %s, %s, %s\n", dest, src1, src2);
	$$ = dest;
}
	| multiplicative_expression SUB expression
{

  char *src1 =  $1;
  char *src2 =  $3;
  char *dest = "_temp";
  printf("- %s, %s, %s\n", dest, src1, src2);
  $$ = dest;


};

multiplicative_expression: 
	term
		{ 
			printf(". __temp__%d\n", productionID);
			printf(". __temp__%d, %s\n", productionID, $1);
			productionID = productionID + 1;
			$$ = $1; 
		}
	| term MULT multiplicative_expression
		{ $$ = "SLDKFJDSLKJ"; }
	| term DIV multiplicative_expression
		{ $$ = "SLDKFJDSLKJ"; }
	| term MOD multiplicative_expression
		{ $$ = "SLDKFJDSLKJ"; }
		;

term: 
	var
		{ $$ = $1; }
	| SUB var
		{ $$ = "SLDKFJDSLKJ"; }
	| NUMBER
		{ $$ = $1; }
	| SUB NUMBER
		{ $$ = "SLDKFJDSLKJ"; }
	| L_PAREN expression R_PAREN
		{ $$ = "SLDKFJDSLKJ"; }
	| SUB L_PAREN expression R_PAREN
		{ $$ = "SLDKFJDSLKJ"; }
	| ident L_PAREN expressions R_PAREN
		{ $$ = "SLDKFJDSLKJ"; };

expressions: 
	/* epsilon */
		{}
	| comma_sep_expressions
		{};

comma_sep_expressions: 
	expression
		{}
	| expression COMMA comma_sep_expressions
		{};

bool_exp:
	relation_and_exp
		{}
	| relation_and_exp OR bool_exp
		{};

relation_and_exp:
	relation_exp
		{}
	| relation_exp AND relation_and_exp
		{};

relation_exp:
	expression comp expression
		{}
	| NOT expression comp expression
		{}
	| TRUE
		{}
	| NOT TRUE
		{}
	| FALSE
		{}
	| NOT FALSE
		{}
	| L_PAREN bool_exp R_PAREN
		{}
	| NOT L_PAREN bool_exp R_PAREN
		{};

comp:
	EQ
		{}
	| NEQ
		{}
	| LT
		{}
	| GT
		{}
	| LTE
		{}
	| GTE
		{};

var:  ident
{ 
    $$ = $1; 

}

	| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			//printf(". __temp__%d\n", productionID);
			//printf(". __temp__%d, %s\n", productionID, $3);
			//productionID = productionID + 1;
		};
vars:
	var
		{
			printf("vars\n");
		}
	| var COMMA vars
		{};
	

%%

int main(int argc, char **argv)
{
   yyparse();
   /*int i =0;
   for(i =0; i < count_names; i++ ) {
     printf("%s\n", list_of_function_names[i]);
   }*/

   return 0;
}

void yyerror(const char *msg)
{
   if(myError == 0)
   {
      printf("** Line %d: %s\n", currLine, msg);
      otherError = 1;
   }
   else
   {
      if(otherError == 1)
      {
         printf("   (%s)\n", msg);
         otherError = 0;
      }
   }
   myError = 0;
}
