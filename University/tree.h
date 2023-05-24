#pragma once

typedef struct _Node {
	int value;
	Node* left;
	Node* right;
} Node;

extern void printTree(Node* root);
extern Node* makeTree();