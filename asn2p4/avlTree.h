#ifndef _avlTree_h
#define _avlTree_h

#define NULLNODEKEY 0
#define BALANCEDVALUE 0

typedef struct avlNode {
	int key;
	struct avlNode* left;
	struct avlNode* right;
	struct avlNode* parent;
	int balanceFactor;
	void* (*balance)(void*, void*);
} avlNode;

typedef struct avlTree {
	avlNode* root;
} avlTree;

avlNode* createAvlNode();
avlTree* createAvlTree();

#endif