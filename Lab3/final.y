%{
   #include<stdio.h>
   #include<string.h>
   #include <stdbool.h>
   #include<stdlib.h>
   #include <ctype.h>
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
   //char* chArr;
   int decC = 0;
   char arrayOfArraysOfChars[254][254];
   int charArrayIndex = 0;

   struct termS {
	   char* s;
	   int i;
   };
   
   char *identToken;
   int numberToken;
   int productionID = 0;

   char list_of_function_names[100][100];
   char list_of_vars[100][100];
   int  count_names = 0;
   int count_vars = 0;

//#define YYDEBUG 1
//yydebug=1;
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
%token <op_val> NUMBER 
%token <op_val> IDENT
%type <op_val> vars-w
%type <int_val> term-s
%type <op_val> var-s

%%

prog_start: 
	functions
		{
			int i = 0;
			//bool invar = false;
			/*for(i = 0;  i < count_vars; ++i){
				printf("arr test %s\n", list_of_vars[i]);
			}*/

			if(!sawmain){
				printf("Error: No main function defined\n");
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

	 charArrayIndex = 0;
     char *token = identToken;
	 char *t = $2;
	 //printf("%s\n", token);
	 if (!strcmp(token, "main")){
		 ism = true;
		 sawmain = true;
		 //printf("bool %d\n", ism);
	 }
	 //printf("bool %d\n", ism);
     printf("func %s\n", token);
     strcpy(list_of_function_names[count_names], t);
	 //printf("test %s\n", list_of_function_names[0]);
     count_names++;
}


ident:
	IDENT
		{ 
			//printf("= %s, __temp__%d\n", $1, productionID);
			$$ = $1; 
		};

declarations: 
	/* epsilon */
		{}
	| declaration SEMICOLON declarations
		{
			//printf("= %s, $%d\n", $1, decC);
			//decC++;
		};

declaration: 
	IDENT COLON INTEGER
{
	   //printf("ident test %s\n", $1);
       char *token = $1;
	   // variable error checking start
	   if (charArrayIndex > 0) {
		   int x = 0;
		   for (x = 0; x < charArrayIndex; x++) {
			   if (!strcmp(token, arrayOfArraysOfChars[x])) {
				   printf("Error: Variable with name '%s' has already declared.\n", token);
				   exit(0);
			   }
		   }
	   }
	   strcpy(arrayOfArraysOfChars[charArrayIndex], token);
   	   charArrayIndex++;
	   // variable error checking end
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
			// variable error checking start
			if (charArrayIndex > 0) {
				int x = 0;
				for (x = 0; x < charArrayIndex; x++) {
					if (!strcmp(token, arrayOfArraysOfChars[x])) {
						printf("Error: Variable with name '%s' has already declared.\n", token);
						exit(0);
					}
				}
			}
			strcpy(arrayOfArraysOfChars[charArrayIndex], token);
			charArrayIndex++;
			// variable error checking end
			char *array_size = $5;
			int array_size_error = atoi(array_size);
			if (array_size_error <= 0) { printf("Error: Array '%s[%s]' cannot be of size <= 0.\n", token, $5); exit(0); }
			strcpy(list_of_vars[count_vars], token);
	   		count_vars++;
       		printf(".[] %s, %s\n", token, $5);
		};

statement: 
	ident ASSIGN expression
{
	char *dest = $1;
	char *src  = $3;
	//printf(". __temp__%d\n", productionID);
	//printf(". __temp__%d, %s\n", productionID, src);
	//printf("testing statement %s\n", $1);

	int i = 0;
	bool invar = false;
	for(i = 0;  i < count_vars; ++i){
		//printf("arr test %s\n", list_of_vars[i]);
		if(!strcmp($1, list_of_vars[i])){
			invar = true;
			//printf("invar test %s\n", list_of_vars[i]);
		}
	}
	if(!invar){
		printf("Error: Variable not defined %s\n", $1);
	}

	printf("= %s, __temp__%d\n", dest, productionID-1);
	//productionID = productionID + 1;

}

| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET ASSIGN expression
{
	char *dest = $1;
	char *src  = $3;
	//printf(". __temp__%d\n", productionID);
	//printf(". __temp__%d, %s\n", productionID, src);

	int i = 0;
	bool invar = false;
	for(i = 0;  i < count_vars; ++i){
		//printf("arr test %s\n", list_of_vars[i]);
		if(!strcmp($1, list_of_vars[i])){
			invar = true;
			//printf("invar test %s\n", list_of_vars[i]);
		}
	}
	if(!invar){
		printf("Error: Variable not defined %s\n", $1);
	}

	printf("[]= %s, __temp__%d, __temp__%d\n", dest, $3-1, productionID-1);
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
	| WRITE vars-w
		{
			$$ = $2;
			//printf(".[]> %s, __temp__%d\n", $2, productionID-1);
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
	//printf("mult-e %d\n", b);
	/*if(b){
		$$ = 0;
		break;
	}*/
	$$ = $1; 
}
	| multiplicative_expression ADD expression
{     
	//char *src1 =  $1;
	//char *src2 =  $3;
	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("+ __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);	
	char* p = productionID + '0';
	//printf("exp %d\n", check);
	recent = productionID;
	productionID = productionID + 1;
	$$ = productionID;
}
	| multiplicative_expression SUB expression
{

  	//char *src1 =  $1;
	//char *src2 =  $3;
	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("- __temp__%d, __temp__%d, __temp__%d\n", productionID, $1-1, $3-1);	
	char* p = productionID + '0';
	//printf("exp %d\n", check);
	recent = productionID;
	productionID = productionID + 1;
	$$ = productionID;


};

multiplicative_expression: 
	term
		{ 
			//printf("isp %d\n", isp);
			if(isp){
				printf(". __temp__%d\n", productionID);
				printf("call %s, __temp__%d\n", $1, productionID);
				productionID = productionID + 1;
				$$ = productionID; 
				isp = false;
				b = true;
				break;
			}
			//printf("charr %s\n", chArr);
			if($1 != "array"){
				printf(". __temp__%d\n", productionID);
				printf("= __temp__%d, %s\n", productionID, $1);
				productionID = productionID + 1;
				$$ = productionID; 
				l = false;
				//check = false;
				break;
			}
			else{
				$$ = productionID;
			}
			
			//char* num = productionID + "0";
			//char* p = "__temp__" + num;
			//printf("Test %s\n", p);
			
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
			/*if(b){
				printf(". __temp__%d\n", productionID);
				printf("= __temp__%d, %s\n", productionID, $1);
				productionID++;
				//char* p = productionID + '0';
				b = false;
				$$ = $1;
			}
			else{
				$$ = $1; 
			}*/
			$$ = $1;
		}
	| SUB var
		{ $$ = "SLDKFJDSLKJ"; }
	| NUMBER
		{ 
			//printf("number\n");
			$$ = $1; 
		}
	| SUB NUMBER
		{ $$ = $2; }
	| L_PAREN expression R_PAREN
		{ 
			//char* n = $2 + '0';
			//$$ = n; 
		}
	| SUB L_PAREN expression R_PAREN
		{ $$ = $3; }
	| ident L_PAREN expressions R_PAREN
		{ 
			isp = true;
			//printf("Yo\n");
			//$$ = 3; 
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
			//printf("number\n");
			$$ = $1; 
		}
	| SUB NUMBER
		{ $$ = $2; }
	| L_PAREN expression R_PAREN
		{ 
			//char* n = $2 + '0';
			//$$ = n; 
		}
	| SUB L_PAREN expression R_PAREN
		{ $$ = $3; }
	| ident L_PAREN expressions R_PAREN
		{ 
			isp = true;
			//printf("Yo\n");
			//$$ = 3; 
		};

expressions: 
	expression COMMA expressions
		{
			printf("param __temp__%d\n", $1-1);
			if(isp){
				//printf("isp\n");
				isp = false;
			}
			//printf("%s\n", $1);
		}
	| expression
		{
			printf("param __temp__%d\n", $1-1);
			//printf("testing\n");
		}
	/* epsilon */
		{};
	/*| comma_sep_expressions
		{
			//$$="comma";
		};*/

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
			//printf("%s\n", $1);
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
		//printf("var ident\n");
		//printf(". __temp__%d\n", productionID);
		//printf(". __temp__%d, %s\n", productionID, $1);
		//printf("= %s, __temp__%d\n", $1, productionID);
		//printf("l check %d\n", l);

		int i = 0;
		bool invar = false;
		for(i = 0;  i < count_vars; ++i){
			//printf("arr test %s\n", list_of_vars[i]);
			if(!strcmp($1, list_of_vars[i])){
				invar = true;
				//printf("invar test %s\n", list_of_vars[i]);
			}
		}
		if(!invar){
			printf("Error: Variable not defined %s\n", $1);
		}

		$$ = productionID; 

	}
	| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			//printf("var []\n");
			printf(". __temp__%d\n", productionID);
			int temp_n = $3;
			printf("=[] __temp__%d, %s, __temp__%d\n", productionID, $1, temp_n-1);
			productionID = productionID + 1;
			check = true;
			//char* num = productionID + "0";
			//printf("%d\n", productionID);
			l = true;
			//chArr = 'array';

			int i = 0;
			bool invar = false;
			for(i = 0;  i < count_vars; ++i){
				//printf("arr test %s\n", list_of_vars[i]);
				if(!strcmp($1, list_of_vars[i])){
					invar = true;
					//printf("invar test %s\n", list_of_vars[i]);
				}
			}
			if(!invar){
				printf("Error: Variable not defined %s\n", $1);
			}

			$$ = productionID;
		};

var:  ident
	{ 
		//printf("var ident\n");
		//printf(". __temp__%d\n", productionID);
		//printf(". __temp__%d, %s\n", productionID, $1);
		//printf("= %s, __temp__%d\n", $1, productionID);
		//printf("l check %d\n", l);

		int i = 0;
		bool invar = false;
		for(i = 0;  i < count_vars; ++i){
			//printf("arr test %s\n", list_of_vars[i]);
			if(!strcmp($1, list_of_vars[i])){
				invar = true;
				//printf("invar test %s\n", list_of_vars[i]);
			}
		}
		if(!invar){
			printf("Error: Variable not defined %s\n", $1);
		}

		$$ = $1; 

	}
	| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			//printf("var []\n");
			printf(". __temp__%d\n", productionID);
			int temp_n = $3;
			printf("=[] __temp__%d, %s, __temp__%d\n", productionID, $1, temp_n-1);
			productionID = productionID + 1;
			check = true;
			//char* num = productionID + "0";
			//printf("%d\n", productionID);
			l = true;
			//chArr = 'array';

			int i = 0;
			bool invar = false;
			for(i = 0;  i < count_vars; ++i){
				//printf("arr test %s\n", list_of_vars[i]);
				if(!strcmp($1, list_of_vars[i])){
					invar = true;
					//printf("invar test %s\n", list_of_vars[i]);
				}
			}
			if(!invar){
				printf("Error: Variable not defined %s\n", $1);
			}

			$$ = "array";
		};

vars:
	var
		{
			//printf("vars\n");
		}
	| var COMMA vars
		{};

vars-w:
	ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
	{
		printf(".[]> %s, __temp__%d\n", $1, productionID-1);
		$$ = $1;
	};
	| ident
	{
		printf(".> %s\n", $1, productionID-1);
		$$ = $1;
	}

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
