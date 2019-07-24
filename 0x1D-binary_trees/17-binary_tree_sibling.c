#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of given node.
 * @node: given node.
 *
 * Return: pointer to sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}
}
