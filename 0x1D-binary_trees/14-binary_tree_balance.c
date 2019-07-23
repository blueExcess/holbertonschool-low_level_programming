#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor of tree
 * @tree: node to start with.
 *
 * Return: balance - left = +1, right = -1;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

/**
 * binary_tree_height - find height of thingy.
 * @tree: root (not groot)
 *
 * Return: height of thing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bigger(binary_tree_height(tree->left),
		       binary_tree_height(tree->right)) + 1);
}

/**
 * bigger - which is bigger?
 * @a: thingy a
 * @b: thingy b
 *
 * Return: the bigger one
 */
int bigger(int a, int b)
{
	return (a >= b ? a : b);
}
