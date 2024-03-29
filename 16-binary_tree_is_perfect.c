#include "binary_trees.h"

/**
 * _binary_tree_height_ - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the tree or 0 if it's empty
*/
size_t _binary_tree_height_(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = _binary_tree_height_(tree->left);
	right = _binary_tree_height_(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the binary tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree, 0));
}

/**
 * is_perfect_recursive - check perfectness using level order traversal
 * @tree: the binary tree to check
 * @height: current height of the tree
 *
 * Return: 1 if perfect; otherwise 0
*/
int is_perfect_recursive(const binary_tree_t *tree, int height)
{
	if (tree == NULL)
		return (height == 0);

	if (tree->left == NULL || tree->right == NULL ||
	!is_perfect_recursive(tree->left, height + 1) ||
	!is_perfect_recursive(tree->right, height + 1))
		return (0);

	return (_binary_tree_height_(tree->left) ==
	 _binary_tree_height_(tree->right));
}
