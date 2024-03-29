#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the binary tree
 *
 * Return: number of nodes in the binary tree or 0 if it's empty
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (1 + size_left + size_right);
}
