#include "stdafx.h"
#include "TreeNode.h"


TreeNode::TreeNode(){
	delete this->leftChild;
	delete this->rightChild;
}

TreeNode::TreeNode(int key, int value):key(key), value(value){	//This is a C++ initializer list
}

//The below is the same thing as above, but written in a style that doesn't use initializer lists
//TreeNode::TreeNode(int key, int value){
//	this->key = key;
//	this->value = value;
//}

int TreeNode::getKey(){
	if(!this){
		throw "Cannot get key of null";
		return NULL;
	}
	return this->key;
}

int TreeNode::getValue(){
	if(!this){
		throw "Cannot get value of null";
		return NULL;
	}
	return this->value;
}

void TreeNode::setValue(int& value){
	if(!this){
		throw "Cannot set value of null node";
		return;
	}
	this->value = value;
}

TreeNode* TreeNode::getLeftChild(){
	if(!this){
		throw "Cannot get left child of null";
		return nullptr;
	}
	return this->leftChild;
}

TreeNode* TreeNode::getRightChild(){
	if(!this){
		throw "Cannot get right child of null";
		return nullptr;
	}
	return this->rightChild;
}


void TreeNode::setLeftChild(TreeNode* theNode){
	if(!this){
		throw "Cannot set left child of null";
		return;
	}
	this->leftChild = theNode;
}

void TreeNode::setRightChild(TreeNode* theNode){
	if(!this){
		throw "Cannot get right child of null";
		return;
	}
	this->rightChild = theNode;
}

//void TreeNode::incrementLeftDepth(){
//	leftDepth++;
//}
//
//void TreeNode::incrementRightDepth(){
//	rightDepth++;
//}
//
//unsigned short TreeNode::getLeftDepth(){
//	return this->leftDepth;
//}
//
//unsigned short TreeNode::getRightDepth(){
//	return this->rightDepth;
//}
//
//void TreeNode::setLeftDepth(unsigned short number){
//	this->leftDepth = number;
//}
//
//void TreeNode::setRightDepth(unsigned short number){
//	this->rightDepth = number;
//}

void TreeNode::setHeight(unsigned short height){
	this->height = height;
}

unsigned short TreeNode::getHeight(){
	if(!this){
		return 0;
	}
	return this->height;
}

short TreeNode::getBalance(){
	if(!this){
		return 0;
	}
	return this->getLeftChild()->getHeight() - this->getRightChild()->getHeight();
}

TreeNode::~TreeNode(){}
