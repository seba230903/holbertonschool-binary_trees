#include "binary_trees.h"

/**
 * binary_tree_sibling - Write a function that finds the sibling of a node
 * @node: is the node to check.
 *
 * Return: The sibling node, or NULL if not successful.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		if (node->parent->right != node)
			return (node->parent->right);
	}
	return (NULL);
}
