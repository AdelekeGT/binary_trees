#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 1 if it's a full tree, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (tree->left != NULL && tree->right != NULL &&
	binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
