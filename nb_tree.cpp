#include "nb_tree.h"
#include <queue>
using std::cout;
using std::queue;

NodeBasedBinaryTree::NodeBasedBinaryTree(const NodeBasedBinaryTree& other) {}
NodeBasedBinaryTree& NodeBasedBinaryTree::operator = (const NodeBasedBinaryTree& other) { return *this; }
NodeBasedBinaryTree::~NodeBasedBinaryTree() {}

Node* NodeBasedBinaryTree::getRoot() const {}
Node* NodeBasedBinaryTree::getleft() const {}
Node* NodeBasedBinaryTree::getRight() const {}

void NodeBasedBinaryTree::setRoot(Node* n) {}
void NodeBasedBinaryTree::setleft(Node* n) {}
void NodeBasedBinaryTree::setRight(Node* n) {}

void NodeBasedBinaryTree::insert(const int data) {}

void NodeBasedBinaryTree::printInOrder(Node* r) const {}
void NodeBasedBinaryTree::printPreOrder(Node* r) const {}
void NodeBasedBinaryTree::printPostOrder(Node* r) const {}

void NodeBasedBinaryTree::printLevelOrder() const {}

bool NodeBasedBinaryTree::search(const int data) const {}

Node* NodeBasedBinaryTree::searchNode(const int data) const {}
Node* NodeBasedBinaryTree::getLastNode() const {}
Node* NodeBasedBinaryTree::getParentNode(const int data) const {}

void NodeBasedBinaryTree::remove(const int data) {}
