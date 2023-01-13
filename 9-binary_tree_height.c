#include "binary_trees.h"
/**
 * binary_tree_height - checks the height of a node
 *
 *@tree: tree node
 *
 * Return: 0 on failure, height(@cnt) on success.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int r, l;

	l = r = 0;

	if (tree)
	{
		if (tree->left)
		{
			l = binary_tree_height(tree->left) + 1;
		}

		if (tree->right)
		{
			r = binary_tree_height(tree->right) + 1;
		}
	}
	else
		return (0);

	return (l > r ? l : r);
}
