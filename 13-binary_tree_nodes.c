#include "binary_trees.h"

/**
 * binary_tree_nodes - Write a function that counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: is the binary tree.
 *
 * Return: The number of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right) /*count if has almost one node*/
		s++;

	if (tree->right)
		s += binary_tree_nodes(tree->left);
	if (tree->right)
		s += binary_tree_nodes(tree->right);

	return (s);
}
