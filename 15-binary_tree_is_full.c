#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 *@tree: node to root
 *
 * Return: 1 on success, 0 if fails.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	l = r = 0;

	if (tree)
	{
		if (tree->left)
			l = binary_tree_is_full(tree->left) + 1;


		if (tree->right)
			r = binary_tree_is_full(tree->right) + 1;
	}

	return (l == r ? 1 : 0);
}
