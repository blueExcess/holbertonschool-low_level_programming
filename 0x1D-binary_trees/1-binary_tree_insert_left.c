#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of parent.
 * @parent: parent node.
 * @value: value to give new node.
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;


	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		old = parent->left;
		new->left = old;
		old->parent = new;
	}

	parent->left = new;

	return (new);
}
