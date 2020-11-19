#include"main.tab.hh"
#include"common.h"
#include<iostream>
using namespace std;
Node *root = nullptr;
extern int num = 0;
int main()
{
	cout << "节点类型 0:Node_Program 1:Node_Operator 2:Node_Const 3:Node_Id 4:Node_Type 5:Node_Stmt" << endl;
	cout << "数据类型 0:Type_Int" << endl;
	cout << "操作符类型 0:Op_Add 1:Op_Sub 2:Op_Mul 4:Op_Div" << endl;
    yyparse();
    if(root){
    	root->printast(root);
        cout << "yes" << endl;
    }
    return 0;
}
int yyerror(char const* message)
{
  cout << message << endl;
  return -1;
}