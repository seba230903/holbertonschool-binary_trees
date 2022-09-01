#include "binary_trees.h"

/**
 * binary_tree_is_root - Write a function that checks if a given node is a root
 * @node: is the node to check.
 *
 * Return: 1 on success, or 0 if not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int n = 0;

	if (!node)
		return (n);

	if (!node->parent) /* parent pointer doesn't exists */
		n = 1;

	return (n);
}
