// Project3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "AVLTree.h"
#include "TreeNode.h"
using namespace std;


int main()
{

	AVLTree* hi = new AVLTree();
	hi->insert(40, 12);
	hi->insert(20, 16);
	hi->insert(50, 11);
	hi->insert(10, 54);
	hi->insert(30, 16);
	hi->insert(45, 72);
	hi->print();
	int test;
	hi->find(40, test);
	cout << endl << test;


	cout << std::endl <<std::endl;
	system("PAUSE");
    return 0;
}

