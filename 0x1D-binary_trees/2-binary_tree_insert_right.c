#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of parent.
 * @parent: parent node.
 * @value: value of new node.
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;


	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->right = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;

	return (new);

}
