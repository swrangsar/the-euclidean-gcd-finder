#include <stdio.h>
#include <stdlib.h>
#include "avlTree.h"

avlNode* createAvlNode()
{
	avlNode* new = malloc(sizeof(avlNode));
	if (!new) {
		printf("Memory could not be allocated for an AVL Node!\n");
		exit(1);
	}
	new->key = NULLNODEKEY;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	new->balanceFactor = BALANCEDVALUE;
	new->balance = NULL;
	return new;
}

avlTree* createAvlTree()
{
	avlTree* new = malloc(sizeof(avlTree));
	if (!new) {
		printf("Memory could not be allocated for an AVL tree!\n");
		exit(1);
	}
	new->root = NULL;
	return new;	
}