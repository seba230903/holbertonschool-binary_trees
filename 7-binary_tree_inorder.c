#include "binary_trees.h"

/**
 * binary_tree_inorder - Write a function that goes through a binary tree
 * using in-order traversal.
 * @tree: is the biary tree.
 * @func: is the function to execute..
 *
 * Return: always void.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)  /*tree's left part*/
		binary_tree_inorder(tree->left, *func);
	(*func)(tree->n);
	if (tree->right) /*tree's right part*/
		binary_tree_inorder(tree->right, *func);
}
