#include<iostream>
#include<string>
#include<string.h>
using namespace std;
static int Index = 0;
enum Nodetype
{
	Node_Program, Node_Operator, Node_Bool, Node_Const, Node_Id, Node_Type, Node_Stmt
};
enum Optype
{
	Op_Add, Op_Sub, Op_Mul, Op_Div, Op_Equal, Op_Not, Op_NotEqual, Op_And, Op_Or, Op_AndBit, Op_OrBit, Op_Mod, Op_Big, Op_Small, Op_BigEqual, Op_SmallEqual, Op_AddEqual, Op_SubEqual, Op_MulEqual, Op_DivEqual, Op_AddAdd, Op_SubSub, Op_UMINUS
};
enum Typetype
{
	Type_Int, Type_Char, Type_String, Type_ConstInt, Type_ConstChar
};
enum ConstType
{
	Int8, Int10, Int16, Charr, Stringg
};
enum Stmttype
{
	Stmt_Declare, Stmt_Assign, Stmt_If, Stmt_While, Stmt_For ,Stmt_Printf, Stmt_Scanf, Stmt_Return
};
#define maxchildnum 100
#define maxsibnum 100
struct Node
{
	int Num;
	Nodetype nodetype;
	Optype optype;
	Typetype tytype;
	Stmttype stmttype;
	ConstType consttype;
	union
	{
		string str_val;
		int int_val;
		bool bool_val;
	};
	Node *leftchild;
	Node *rightchild;
	Node *child[maxchildnum];
	Node *father;
	Node *sibling[maxsibnum];
	Node(){};
	Node(Nodetype nodetype)
	{
		this->Num = 0;
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
	void sibtochild(Node *nodefather, Node *nodesibling, int i)
	{
		nodefather->child[i] = nodesibling;
		int k = 0;
		Node *cur = nodesibling->sibling[k];
		while(cur != NULL)
		{
			i++;
			cur->sibtochild(nodefather, cur, i);
			k++;
			cur = nodesibling->sibling[k];
		}
	}
	void addchild(Node *node)
	{
		this->child[0] = node;

		int i = 1, j = 0;
		Node *cur = node->sibling[j];
		while(cur != NULL)
		{
			this->sibtochild(this, cur, i);
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
	void setnum(Node *node)
	{
		node->Num = Index;
		Index = Index + 1;
		if(node->leftchild != NULL)
		{
			setnum(node->leftchild);
		}
		if(node->rightchild != NULL)
		{
			setnum(node->rightchild);
		}
		for(int i = 0; i < maxchildnum; i++)
		{
			if(node->child[i] != NULL)
			{
				setnum(node->child[i]);
			}
		}
	}
	void printast(Node *node)
	{
		cout << "序号\t" << node->Num << "\t节点类型\t";
		if(node->nodetype == Node_Program)
		{
			cout << "程序开始\t\t\t\t\t";
		}
		else if(node->nodetype == Node_Const)
		{
			cout << "常量\t\t";
			switch(node->consttype)
			{
				case 0:
					cout << "int8\t" << node->int_val << "\t\t"; break;
				case 1:
					cout << "int10\t" << node->int_val << "\t\t"; break;
				case 2:
					cout << "int16\t" << node->int_val << "\t\t"; break;
				case 3:
					cout << "字符\t\t" << node->str_val << "\t\t"; break;
				case 4:
					cout << "字符串\t" << node->str_val << "\t\t"; break;
			}
		}
		else if(node->nodetype == Node_Bool)
		{
			cout << "布尔\t\t";
		}
		else if(node->nodetype == Node_Type)
		{
			cout << "数据类型\t\t";
			switch(node->tytype)
			{
				case 0: 
					cout << "int\t\t\t"; break;
				case 1:
					cout << "char\t\t"; break;
				case 2:
					cout << "string\t\t"; break;
				case 3:
					cout << "constint\t"; break;
				case 4:
					cout << "constchar\t"; break;
			}
		}
		else if(node->nodetype == Node_Id)
		{
			cout << "变量名\t" << node->str_val << "\t\t\t\t";
		}
		else if(node->nodetype == Node_Operator)
		{
			cout << "运算\t\t操作符\t";
			switch(node->optype)
			{
				case 0:
					cout << "+\t\t"; break;
				case 1:
					cout << "-\t\t"; break;
				case 2:
					cout << "*\t\t"; break;
				case 3:
					cout << "/\t\t"; break;
				case 4:
					cout << "==\t\t"; break;
				case 5:
					cout << "!\t\t"; break;
				case 6:
					cout << "!=\t\t"; break;
				case 7:
					cout << "&&\t\t"; break;
				case 8:
					cout << "||\t\t"; break;
				case 9:
					cout << "&\t\t"; break;
				case 10:
					cout << "|\t\t"; break;
				case 11:
					cout << "%\t\t"; break;
				case 12:
					cout << ">\t\t"; break;
				case 13:
					cout << "<\t\t"; break;
				case 14:
					cout << ">=\t\t"; break;
				case 15:
					cout << "<=\t\t"; break;
				case 16:
					cout << "+=\t\t"; break;
				case 17:
					cout << "-=\t\t"; break;
				case 18:
					cout << "*=\t\t"; break;
				case 19:
					cout << "/=\t\t"; break;
				case 20:
					cout << "++\t\t"; break;
				case 21:
					cout << "--\t\t"; break;
				case 22:
					cout << "-\t\t"; break;
			}
		}
		else if(node->nodetype == Node_Stmt)
		{
			switch(node->stmttype)
			{
				case 0:
					cout << "声明语句\t\t\t\t\t"; break;
				case 1:
					cout << "赋值语句\t\t\t\t\t"; break;
				case 2:
					cout << "If语句\t\t\t\t\t"; break;					
				case 3:
					cout << "While语句\t\t\t\t"; break;					
				case 4:
					cout << "For语句\t\t\t\t\t"; break;					
				case 5:
					cout << "Prinf语句\t\t\t\t"; break;					
				case 6:
					cout << "Scanf语句\t\t\t\t"; break;					
				case 7:
					cout << "Return语句\t\t\t\t"; break;
			}
		}
		cout << "child:\t";
		if(node->leftchild != NULL)
		{
			cout << node->leftchild->Num << " ";
		}
		if(node->rightchild != NULL)
		{
			cout << node->rightchild->Num << " ";
		}
		for(int i = 0; i < maxchildnum; i++)
		{
			if(node->child[i] != NULL)
			{
				cout << node->child[i]->Num << " ";
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
