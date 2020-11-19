%option noyywrap
%{
	#include "common.h"
	#include "main.tab.hh"
    extern int num;
%}

Integer [0-9]+
Id [a-z]+
EOL (\r\n|\n)
WHITE [\t ]

%%

"int" return Int;
"if" return If;
"else" return Else;
"while" return While;

"printf" return Printf;
"scanf" return Scanf;

"=" return Assign;
"+" return Add;
"-" return Sub;
"*" return Mul;
"/" return Div;
"!=" return NotEqual;
"==" return Equal;

";" return Semicolon;
"(" return LParen;
")" return RParen;
"{" return LBrace;
"}" return RBrace;

{Integer} {
    Node *node = new Node(Node_Const);
    node->int_val = atoi(yytext);
    node->Num = num;
    num = num + 1;
    yylval = node;
    return Integer;
}

{Id} {
    Node *node = new Node(Node_Id);
    node->str_val = yytext;
    node->Num = num;
    num = num + 1;
    yylval = node;
    return Id;
}
{EOL}
{WHITE}

%%