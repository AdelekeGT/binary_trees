#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: root node of the binary tree
 *
 * Return: number of nodes with at least one child, or 0 on failure
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	if (is_leaf(tree))
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (1 + left_count + right_count);
}

/**
 * is_leaf - checks if a given node is a leaf
 * @node: pointer to the node to be checked
 *
 * Return: true if it's a leaf, false otherwise
 */
bool is_leaf(const binary_tree_t *node)
{
	return ((node == NULL) || (node->left == NULL && node->right == NULL));
}
