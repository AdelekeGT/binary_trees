#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node to which we want to insert
 * @value: value for new node
 *
 * Return: pointer to the created node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child_new;

	if (parent == NULL)
		return (NULL);

	left_child_new = malloc(sizeof(binary_tree_t));
	if (left_child_new == NULL)
		return (NULL);

	left_child_new->n = value;
	left_child_new->parent = parent;
	left_child_new->left = NULL;
	left_child_new->right = NULL;

	if (parent->left != NULL)
	{
		left_child_new->left = parent->left;
		parent->left->parent = left_child_new;
	}

	parent->left = left_child_new;

	return (left_child_new);
}
