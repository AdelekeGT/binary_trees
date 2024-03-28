#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node to insert new node into
 * @value: value for the new node
 *
 * Return: pointer to the newly created node on success, NULL otherwise
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child_new;

	if (parent == NULL)
		return (NULL);

	right_child_new = malloc(sizeof(binary_tree_t));
	if (right_child_new == NULL)
		return (NULL);

	right_child_new->n = value;
	right_child_new->parent = parent;
	right_child_new->left = NULL;
	right_child_new->right = NULL;

	if (parent->right != NULL)
	{
		right_child_new->right = parent->right;
		parent->right->parent = right_child_new;
	}

	parent->right = right_child_new;

	return (right_child_new);
}
