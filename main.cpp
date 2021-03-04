#include"main.tab.hh"
#include"common.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
Node *root = nullptr;
block b[100];
curblock cb;
int blockindex = -1;
int forflag = 0;
vector<string> forvariable[100];
int main()
{
  cout << "Start!" << endl;yyparse();
    if(root)
    {
    	root->setnum(root);
    	root->printast(root);
      
      cout << "Finish!" << endl;
    }
    return 0;
}

int yyerror(char const* message)
{
  cout << message << endl;
  return -1;
}