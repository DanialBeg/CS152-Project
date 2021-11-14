%{
   #include<stdio.h>
   #include <unistd.h>
   #include<string.h>
   #include <stdbool.h>
   #include<stdlib.h>
   #include <ctype.h>
   #include <libgen.h>
   void yyerror(const char *msg);
   extern int currLine;
   int myError = 0;
   int otherError = 0;
   bool check = false;
   bool ism = false;
   bool isp = false;
   bool l = false;
   bool b = false;
   bool f = false;
   bool sawmain = false;
   int recent = 0;
   int decC = 0;
   char array_for_error_4[254][254];
   int error_4_index = 0;

   struct termS {
	   char* s;
	   int i;
   };
   
   char *identToken;
   int numberToken;
   int productionID = 0;

   char list_of_function_names[100][100];
   char list_of_vars[100][100];
   char list_of_integers[100][100];
   char list_of_arrays[100][100];

   int count_names = 0;
   int count_vars = 0;
   int count_integers = 0;
   int count_arrays = 0;

%}

%union {
  char *op_val;
  int int_val;
}

%type <op_val> var
%type <op_val> statement
%type <op_val> declaration
%type <op_val> vars
%type <op_val> ident
%type <op_val> expression
%type <op_val> expressions
%type <op_val> comma_sep_expressions
%type <int_val> multiplicative_expression
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
%token <op_val> NUMBER L_SQUARE_BRACKET
%token <op_val> IDENT
%type <op_val> vars-w
%type <int_val> term-s
%type <op_val> var-s

%%

prog_start: 
	functions
		{
			int i = 0;
			if(!sawmain){
				printf("Error line %d: no main function defined.\n", currLine);
				exit(0);
			}	
		};

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
   printf("endfunc\n\n");
   decC = 0;
}

function_ident: FUNCTION ident {
	 error_4_index = 0;
	 count_arrays = 0;
	 count_integers = 0;
     	 char *token = identToken;
	 char *t = $2;
	 if (!strcmp(token, "main")){
		 ism = true;
		 sawmain = true;
	 }
         printf("func %s\n", token);
         strcpy(list_of_function_names[count_names], t);
         count_names++;
}


ident:
	IDENT
		{ 
			$$ = $1; 
		};

declarations: 
	/* epsilon */
		{}
	| declaration SEMICOLON declarations
		{};

declaration: 
	IDENT COLON INTEGER
{
        char *token = $1;
		if (error_4_index > 0) {
		   int x = 0;
		   for (x = 0; x < error_4_index; x++) {
			   if (!strcmp(token, array_for_error_4[x])) {
				   printf("Error line %d: variable with name '%s' has already declared.\n", currLine, token);
				   exit(0);
			   }
		   }
	   }
	   strcpy(array_for_error_4[error_4_index], token);
	   strcpy(list_of_integers[count_integers], token);
   	   error_4_index++;
	   count_integers++;
	   strcpy(list_of_vars[count_vars], token);
	   count_vars++;
           printf(". %s\n", token);
	   if(!ism){
		   printf("= %s, $%d\n", $1, decC);
		   ism = false;
	   }
	   
	   decC++;
	   $$ = $1;

}
	| IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		{
			char *token = $1;
			if (error_4_index > 0) {
				int x = 0;
				for (x = 0; x < error_4_index; x++) {
					if (!strcmp(token, array_for_error_4[x])) {
						printf("Error line %d: variable with name '%s' has already declared.\n", currLine, token);
						exit(0);
					}
				}
			}
			strcpy(array_for_error_4[error_4_index], token);
			strcpy(list_of_arrays[count_arrays], token);
			error_4_index++;
			count_arrays++;
			char *array_size = $5;
			int array_size_error = atoi(array_size);
			if (array_size_error <= 0) { 
				printf("Error line %d: array '%s[%s]' cannot be of size <= 0.\n", currLine, token, $5); 
				exit(0); 
			}
			strcpy(list_of_vars[count_vars], token);
	   		count_vars++;
       		        printf(".[] %s, %s\n", token, $5);
		};

statement: 
	ident ASSIGN expression
{
	char *token = $1;
	int x = 0;
	for (x = 0; x < count_arrays; x++) {
		if (!strcmp(token, list_of_arrays[x])) {
			printf("Error line %d: forgot to specify an array index for '%s' when using an array variable.\n", currLine, token);
			exit(0);
		}
	}
	char *dest = $1;
	char *src  = $3;
	int i = 0;
	bool invar = false;
	for(i = 0;  i < count_vars; ++i){
		if(!strcmp($1, list_of_vars[i])){
			invar = true;
		}
	}
	if(!invar){
		printf("Error line %d: variable '%s' not defined.\n", currLine, $1);
		exit(0);
	}
	printf("= %s, __temp__%d\n", dest, productionID-1);

}

| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET ASSIGN expression
{
	char *token = $1;
	int x = 0;
	for (x = 0; x < count_integers; x++) {
		if (!strcmp(token, list_of_integers[x])) {
			printf("Error line %d: specified an array index for '%s' when using a regular integer variable.\n", currLine, token);
			exit(0);
		}
	}
	char *dest = $1;
	char *src  = $3;
	int i = 0;
	bool invar = false;
	for (i = 0;  i < count_vars; ++i){
		if(!strcmp($1, list_of_vars[i])){
			invar = true;
		}
	}
	if(!invar){
		printf("Error line %d: variable '%s' not defined.\n", currLine, $1);
		exit(0);
	}
	printf("[]= %s, __temp__%d, __temp__%d\n", dest, $3-1, productionID-1);
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
	| WRITE vars-w
		{
			$$ = $2;
		}
	| CONTINUE
		{}
	| RETURN expression
		{
			printf("ret __temp__%d\n", productionID-1);
			b = true;
		};

statements: 
	statement SEMICOLON/* epsilon */
		{}
	| statement SEMICOLON statements
		{};

expression: 
	multiplicative_expression
{
	$$ = $1; 
}
	| multiplicative_expression ADD expression
{     
	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("+ __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);	
	char* p = productionID + '0';
	recent = productionID;
	productionID = productionID + 1;
	$$ = productionID;
}
	| multiplicative_expression SUB expression
{

	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("- __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);	
	char* p = productionID + '0';
	recent = productionID;
	productionID = productionID + 1;
	$$ = productionID;


};

multiplicative_expression: 
	term
		{ 
			if(isp){
				char *func_call = $1;
				if (count_names > 0) {
					int x = 0;
					bool matches = false;
					for (x = 0; x < count_names; x++) {
						if (!strcmp(func_call, list_of_function_names[x])) {
							matches = true;
						}
					}
					if (!matches) {
						printf("Error line %d: function with name '%s' does not exist.\n", currLine, func_call);
						exit(0);
					}
				}
				printf(". __temp__%d\n", productionID);
				printf("call %s, __temp__%d\n", $1, productionID);
				productionID = productionID + 1;
				$$ = productionID; 
				isp = false;
				b = true;
				break;
			}
			if($1 != "array"){
				printf(". __temp__%d\n", productionID);
				printf("= __temp__%d, %s\n", productionID, $1);
				productionID = productionID + 1;
				$$ = productionID; 
				l = false;
				break;
			}
			else{
				$$ = productionID;
			}		
		}
	| expression MULT multiplicative_expression
		{ 
			printf(". __temp__%d\n", productionID, $1);
			if(b){
				printf("* __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);
			}
			else{
				printf("* __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, recent);
			}
			b = false;
			recent = productionID;
			productionID++;
			$$ = "SLDKFJDSLKJ"; 
		}
	| expression DIV multiplicative_expression
		{ 
			printf(". __temp__%d\n", productionID, $1);
			if(b){
				printf("/ __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);
			}
			else{
				printf("/ __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, recent);
			}
			b = false;
			recent = productionID;
			productionID++;
			$$ = "SLDKFJDSLKJ"; 
		}
	| expression MOD multiplicative_expression
		{ 
			printf(". __temp__%d\n", productionID, $1);
			if(b){
				printf("% __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);
			}
			else{
				printf("% __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, recent);
			}
			b = false;
			recent = productionID;
			productionID++;
			$$ = "SLDKFJDSLKJ"; 
		}
		;

term: 
	var
		{ 
			$$ = $1;
		}
	| SUB var
		{ $$ = "SLDKFJDSLKJ"; }
	| NUMBER
		{ 
			$$ = $1; 
		}
	| SUB NUMBER
		{ $$ = $2; }
	| L_PAREN expression R_PAREN
		{}
	| SUB L_PAREN expression R_PAREN
		{ $$ = $3; }
	| ident L_PAREN expressions R_PAREN
		{ 
			isp = true;
		};

term-s: 
	var
		{ 
			$$ = $1; 
		}
	| SUB var
		{ $$ = "SLDKFJDSLKJ"; }
	| NUMBER
		{ 
			$$ = $1; 
		}
	| SUB NUMBER
		{ $$ = $2; }
	| L_PAREN expression R_PAREN
		{}
	| SUB L_PAREN expression R_PAREN
		{ $$ = $3; }
	| ident L_PAREN expressions R_PAREN
		{ 
			isp = true;
		};

expressions: 
	expression COMMA expressions
		{
			printf("param __temp__%d\n", $1-1);
			if(isp){
				isp = false;
			}
		}
	| expression
		{
			printf("param __temp__%d\n", $1-1);
		}
	/* epsilon */
		{};
	/*| comma_sep_expressions
		{};*/

comma_sep_expressions: 
	expression
		{}
	| expression COMMA comma_sep_expressions
		{
			printf("Comma\n");
			if(isp){
				printf("isp\n");
				isp = false;
			}
		};

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

var-s:  ident
	{ 
		char *token = $1;
		int x = 0;
		for (x = 0; x < count_arrays; x++) {
			if (!strcmp(token, list_of_arrays[x])) {
				printf("Error line %d: specified an array index for '%s' when using a regular integer variable.\n", currLine, token);
				exit(0);
			}
		}
		int i = 0;
		bool invar = false;
		for (i = 0;  i < count_vars; ++i) {
			if (!strcmp($1, list_of_vars[i])){
				invar = true;
			}
		}
		if(!invar){
			printf("Error line %d: variable '%s' not defined.\n", currLine, $1);
			exit(0);
		}

		$$ = productionID; 

	}
	| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			char *token = $1;
			int x = 0;
			for (x = 0; x < count_integers; x++) {
				if (!strcmp(token, list_of_integers[x])) {
					printf("Error line %d: specified an array index for '%s' when using a regular integer variable.\n", currLine, token);
					exit(0);
				}
			}
			printf(". __temp__%d\n", productionID);
			int temp_n = $3;
			printf("=[] __temp__%d, %s, __temp__%d\n", productionID, $1, temp_n-1);
			productionID = productionID + 1;
			check = true;
			l = true;
			int i = 0;
			bool invar = false;
			for(i = 0;  i < count_vars; ++i){
				if(!strcmp($1, list_of_vars[i])){
					invar = true;
				}
			}
			if(!invar){
				printf("Error line %d: variable '%s' not defined.\n", currLine, $1);
				exit(0);
			}

			$$ = productionID;
		};

var:  ident
	{ 
		char *token = $1;
		int x = 0;
		for (x = 0; x < count_arrays; x++) {
			if (!strcmp(token, list_of_arrays[x])) {
				printf("Error line %d: forgot to specify an array index for '%s' when using an array variable.\n", currLine, token);
				exit(0);
			}
		}
		int i = 0;
		bool invar = false;
		for(i = 0;  i < count_vars; ++i){
			if(!strcmp($1, list_of_vars[i])){
				invar = true;
			}
		}
		if(!invar){
			printf("Error line %d: variable '%s' not defined.\n", currLine, $1);
			exit(0);
		}

		$$ = $1; 

	}
	| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			char *token = $1;
			int x = 0;
			for (x = 0; x < count_integers; x++) {
				if (!strcmp(token, list_of_integers[x])) {
					printf("Error line %d: specified an array index for '%s' when using a regular integer variable.\n", currLine, token);
					exit(0);
				}
			}
			printf(". __temp__%d\n", productionID);
			int temp_n = $3;
			printf("=[] __temp__%d, %s, __temp__%d\n", productionID, $1, temp_n-1);
			productionID = productionID + 1;
			check = true;
			l = true;
			int i = 0;
			bool invar = false;
			for(i = 0;  i < count_vars; ++i){
				if(!strcmp($1, list_of_vars[i])){
					invar = true;
				}
			}
			if(!invar){
				printf("Line %d  Variable not defined %s\n.", currLine, $1);
				exit(0);
			}

			$$ = "array";
		};

vars:
	var
		{}
	| var COMMA vars
		{};

vars-w:
	ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
	{
		char *token = $1;
			int x = 0;
			for (x = 0; x < count_integers; x++) {
				if (!strcmp(token, list_of_integers[x])) {
					printf("Error line %d: specified an array index for '%s' when using a regular integer variable.\n", currLine, token);
					exit(0);
				}
			}
		printf(".[]> %s, __temp__%d\n", $1, productionID-1);
		$$ = $1;
	};
	| ident
	{	
		char *token = $1;
		int x = 0;
		for (x = 0; x < count_arrays; x++) {
			if (!strcmp(token, list_of_arrays[x])) {
				printf("Error line %d: forgot to specify an array index for '%s' when using an array variable.\n", currLine, token);
				exit(0);
			}
		}
		printf(".> %s\n", $1, productionID-1);
		$$ = $1;
	}

%%

int main(int argc, char **argv)
{
   yyparse();
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
