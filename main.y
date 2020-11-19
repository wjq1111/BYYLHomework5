%{
    #include "common.h"
    #include <iostream>
    using namespace std;
    extern Node * root;
    int yylex();
    extern int yyparse();
    int yyerror(char const * );
    extern int num;
%}
%defines
%start Program

%token If Else While
%token Id
%token Integer
%token Int
%token LParen RParen LBrace RBrace Semicolon
%token True False
%token Add Sub Mul Div
%token Assign Equal NotEqual
%token Printf Scanf

%left Add Sub Mul Div
%left Equal
%right Assign NotEqual


%%

Program
	: Statements {
		root = new Node(Node_Program);
		root->addchild($1);
		root->Num = num;
    	num = num + 1;
	}
	;

Statements
	: Statement {$$ = $1;}
	| Statements Statement {
		$$ = $1;
		$$->addsibling($2);
	}
	;

Statement
    : Instruction { $$ = $1;}
    ;

Instruction
	: Type Id Assign Expression Semicolon{
        Node *node = new Node(Node_Stmt);
        $1->addsibling($2);
        $1->addsibling($4);
        node->addchild($1);
        node->Num = num;
    	num = num + 1;
        $$ = node;
    }
	;

Expression
	: Id {
		$$ = $1;
	}
	| Integer {
		$$ = $1;
	}
	| Expression Add Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Add;
		node->createleftchild($1);
		node->createrightchild($3);
		node->Num = num;
    	num = num + 1;
		$$ = node;
		
	}
	;

Type
	: Int {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Int;
		node->Num = num;
    	num = num + 1;
		$$ = node;
	}
	;


%%
