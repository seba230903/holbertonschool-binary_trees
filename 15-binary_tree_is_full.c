#include "binary_trees.h"

/**
 * binary_tree_is_full - Write a function that checks if a binary tree is full
 * @tree: is the binary tree.
 *
 * Return: 1 if the tree is full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 0;

	if (!tree)
		return (0);

	if (tree->left)
		n = binary_tree_is_full(tree->left);
	if (tree->right)
		n = binary_tree_is_full(tree->right);

	if (tree->parent)
	{
	if ((!tree->left || !tree->right)) /*si no existe algun nodo*/
		n = 0;
	else
		n = 1;
	}
	return (n);
}
