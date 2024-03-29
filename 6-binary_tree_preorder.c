#include "binary_trees.h"

/**
 * binary_tree_preorder - function goes through a binary tree
 * using pre-order taversal
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to the function that will be called for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
