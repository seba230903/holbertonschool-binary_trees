#include "binary_trees.h"

/**
 * binary_tree_levelorder - Write a function that goes through
 * a binary tree using level-order traversal.
 * @tree: is the binary tree.
 * @func: is the function to execute.
 *
 * Return: Always void.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if ((tree->left || tree->right) && !tree->parent)
		(*func)(tree->n);
	if (tree->left)
		(*func)(tree->left->n);
	if (tree->right)
		(*func)(tree->right->n);

	if (tree->left)  /*tree's left part*/
		binary_tree_levelorder(tree->left, *func);
	if (tree->right) /*tree's right part*/
		binary_tree_levelorder(tree->right, *func);
}
