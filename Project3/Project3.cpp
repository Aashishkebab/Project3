// Project3.cpp : Defines the entry point for the console application.
//Please note that a lot of functions have been overloaded with different parameters.

#include "stdafx.h"
#include <iostream>
#include "AVLTree.h"
#include "TreeNode.h"
using namespace std;


int main(){

	AVLTree* hi = new AVLTree();
	/*hi->insert(40, 12);
	hi->insert(20, 16);
	hi->insert(50, 11);
	hi->insert(10, 54);
	hi->insert(30, 16);
	hi->insert(45, 72);*/

	hi->insert(0, 0);
	hi->insert(1, 1);
	hi->insert(2, 2);
	hi->insert(9, 9);
	hi->insert(55, 55);
	hi->insert(56, 56);
	hi->insert(58, 58);
	hi->insert(57, 57);
	hi->print();
	cout << endl << hi->getHeight();
	delete hi;
	/*int test;
	hi->find(40, test);
	cout << endl << test;

	vector<int> howdy = hi->findRange(12, 16);
	cout << endl;
	for(unsigned short i = 0; i < howdy.size(); i++){
		cout << howdy[i] << " ";
	}*/


	cout << std::endl << std::endl;
	system("PAUSE");
	return 0;
}

