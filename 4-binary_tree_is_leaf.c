#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Write a function that
 * checks if a node is a leaf
 * @node: is the node to check
 * Return: 1 on (Success),  or 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (!node)
		return (n);

	if (!node->left && !node->right) /* left & right pointers doesn't exists */
		n = 1;

	return (n);
}
