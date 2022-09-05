#include "binary_trees.h"

/**
 * binary_tree_inorder - write a function that goes through
 * a binary tree using post-order traversal
 * @tree: is the binary tree
 * @func: is the function
 *
 * Return: Always void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)  /*tree's left part*/
		binary_tree_inorder(tree->left, *func);
	if (tree->right) /*tree's right part*/
		binary_tree_inorder(tree->right, *func);

	(*func)(tree->n);
}
