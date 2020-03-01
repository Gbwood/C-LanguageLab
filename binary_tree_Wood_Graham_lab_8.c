#include "binary_tree.h"
#include "stdlib.h"

BinaryTree*  BinaryTree_make(int i, BinaryTree * A, BinaryTree * B) {
	BinaryTree * tree = malloc(sizeof(BinaryTree));
	tree->value = i;
	tree->left = A;
	tree->right = B;
	return tree;
}



void BinaryTree_free(BinaryTree * sup) {
	if (sup == NULL) {
		return;
	}
	BinaryTree_free(sup->right);
	BinaryTree_free(sup->left);
	free(sup);
}
