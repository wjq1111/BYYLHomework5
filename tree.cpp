#include<iostream>
#include<string>
#include<string.h>
using namespace std;
enum Nodetype
{
	Node_Program, Node_Operator, Node_Const, Node_Id, Node_Type, Node_Stmt
};
enum Optype
{
	Op_Add, Op_Sub, Op_Mul, Op_Div
};
enum Typetype
{
	Type_Int
};
#define maxchildnum 40
#define maxsibnum 40
struct Node
{
	int Num;
	Nodetype nodetype;
	Optype optype;
	Typetype tytype;
	union
	{
		string str_val;
		int int_val;
	};
	Node *leftchild;
	Node *rightchild;
	Node *child[maxchildnum];
	Node *father;
	Node *sibling[maxsibnum];
	Node(){};
	Node(Nodetype nodetype)
	{
		this->nodetype = nodetype;
		this->leftchild = NULL;
		this->rightchild = NULL;
		this->father = NULL;
		for(int i = 0; i < maxchildnum; i++)
		{
			this->child[i] = NULL;
		}
	}
	
	void createleftchild(Node *node)
	{
		this->leftchild = node;
		node ->father = this;
	}
	void createrightchild(Node *node)
	{
		this->rightchild = node;
		node->father = this;
	}
	void addchild(Node *node)
	{
		this->child[0] = node;
		int i = 1, j = 0;
		Node *cur = node->sibling[j];
		while(cur != NULL)
		{
			this->child[i] = node->sibling[j];
			i++, j++;
			cur = node->sibling[j];
		}
	}
	void addsibling(Node *node)
	{
		Node *cur = this->sibling[0];
		int i = 0;
		while(cur != NULL)
		{
			i++;
			cur = this->sibling[i];
		}
		this->sibling[i] = node;
	}
	void printast(Node *node)
	{
		cout << "序号 " << node->Num << " 节点类型 " << node->nodetype << " ";
		if(node->nodetype == Node_Const)
		{
			cout << "数值 " << node->int_val << " ";
		}
		if(node->nodetype == Node_Type)
		{
			cout << "数据类型 ";
			switch(node->tytype)
			{
				case 0: 
					cout << "int "; break;
			}
		}
		if(node->nodetype == Node_Id)
		{
			cout << "变量名 " << node->str_val << " ";
		}
		if(node->nodetype == Node_Operator)
		{
			cout << "操作符 ";
			switch(node->optype)
			{
				case 0:
					cout << "+ "; break;
				case 1:
					cout << "- "; break;
				case 2:
					cout << "* "; break;
				case 3:
					cout << "/ "; break;
			}
		}
		cout << endl;
		if(node->leftchild != NULL)
		{
			printast(node->leftchild);
		}
		if(node->rightchild != NULL)
		{
			printast(node->rightchild);
		}
		for(int i = 0; i < maxchildnum; i++)
		{
			if(node->child[i] != NULL)
			{
				printast(node->child[i]);
			}
		}
	}
};
