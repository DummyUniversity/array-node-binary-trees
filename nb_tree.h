#ifndef BINARY_TREE_20251208_H
#define BINARY_TREE_20251208_H

#include "node.h"
#include <iostream>

class NodeBasedBinaryTree
{
	Node* root = NULL;
	Node* left = NULL;
	Node* right = NULL;

public:	
	
	NodeBasedBinaryTree(const NodeBasedBinaryTree& other);
	NodeBasedBinaryTree& operator = (const NodeBasedBinaryTree& other);
	~NodeBasedBinaryTree();

	Node* getRoot() const;

	void setRoot(Node* n);
	void setleft(Node* n);
	void setRight(Node* n);

	void insert(const int data);

	void printInOrder(Node* r) const;
	void printPreOrder(Node* r) const;
	void printPostOrder(Node* r) const;

	void printLevelOrder() const;

	bool search(const int data) const;

	Node* searchNode(const int data) const;
	Node* getLastNode() const;
	Node* getParentNode(const int data) const;

	void remove(const int data);
};

#endif

