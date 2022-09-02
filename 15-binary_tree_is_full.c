#include "binary_trees.h"

/**
 * binary_tree_is_full - Write a function that checks if a binary tree is full
 * @tree: is the binary tree.
 *
 * Return: 1 if the tree is full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 1, n_l = 1, n_r = 1;

	if (!tree)
		return (0);

	if ((tree->left || tree->right) && (!tree->left || !tree->right))
		return (0);/*return if a node doesn't exists*/

	if (tree->left) /*left side tree*/
		n_l = binary_tree_is_full(tree->left);
	if (tree->right) /*right side tree*/
		n_r = binary_tree_is_full(tree->right);

	if (n_l && n_r)
		n = 1;
	else
		n = 0;

	return (n);
}
