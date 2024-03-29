#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: pointer to root node of binary tree
 *
 * Return: number of leaves in binary tree or 0 if empty
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_left, leaf_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaf_left = binary_tree_leaves(tree->left);

	leaf_right = binary_tree_leaves(tree->right);

	return (leaf_left + leaf_right);
}
