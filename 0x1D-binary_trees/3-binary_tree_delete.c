#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree.
 * @tree: root node of tree.
 *
 * Return: VOID
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	tree_shreader(tree);
}

/**
 * tree_shreader - deletes nodes of tree using postorder search.
 * @node: node to search.
 *
 * Return: VOID
 */
void tree_shreader(binary_tree_t *node)
{
	if (node == NULL)
		return;

	tree_shreader(node->left);
	tree_shreader(node->right);
	free(node);
}
