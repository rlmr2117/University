#include <stdlib.h>
#include <stdio.h>
#include "tree.h"



Node* root;

Node* createNode(int val) {
	Node* pNode = (Node *)malloc(sizeof(Node));

	pNode->value = val;
	pNode->left = NULL;
	pNode->right = NULL;
	
	return pNode;
}

Node * connectChild(Node* parent, Node* left, Node* right) {
	if (parent == NULL) return NULL;

	parent->left = left;
	parent->right = right;
	return parent;

}

Node * makeTree() {
	Node* pRoot = NULL;
	Node* tLeft = NULL;
	Node* tRight = NULL;

	pRoot = createNode(100);
	tLeft = createNode(200);
	tRight = createNode(300);

	connectChild(pRoot, tLeft, tRight);

	connectChild(tRight, createNode(400), createNode(500));


	return pRoot;
}

void printTree(Node* root) {
	if (root == NULL) return;
	
	printf("Node : %d\t", root->value);
	printTree(root->left);
	printTree(root->right);

}