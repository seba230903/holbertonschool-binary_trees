#include "binary_trees.h"

/**
 * binary_tree_height - Write a function that measures
 * the height of a binary tree
 * @tree: is the biary tree.
 *
 * Return: the height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t s = 0, s_l = 0, s_r = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		s++;

	if (tree->left) /*tree's left part*/
		s_l += binary_tree_height(tree->left);
	if (tree->right) /*tree's right part*/
		s_r += binary_tree_height(tree->right);

	if (s_l > s_r)
		s += s_l;
	else
		s += s_r;
	return (s);
}
