#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;
struct block
{
	vector<string> id;
	void printblock()
	{
		for(int i = 0; i < this->id.size(); i++)
		{
			cout << this->id[i] << " ";
		}
		cout << endl;
	}
};
struct curblock
{
	vector<string> id;
	void printcurblock()
	{
		for(int i = 0; i < this->id.size(); i++)
		{
			cout << this->id[i] << " ";
		}
		cout << endl;
	}
};