#include "binary_trees.h"

/**
 * binary_tree_size - Write a function that measures the size of a binary tree
 * @tree: is the binary tree.
 *
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (!tree)
		return (0);

	if (tree->left)  /*tree's left part*/
		s += binary_tree_size(tree->left);

	if (tree->right)	/*tree's right part*/
		s += binary_tree_size(tree->right);

	return (s);
}
