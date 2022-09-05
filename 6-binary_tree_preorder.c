#include "binary_trees.h"

/**
 * binary_tree_preorder - Write a function that goes through a binary tree
 * using pre-order traversal
 * @tree: is the binary tree
 * @func: is the function
 *
 * Return: Always void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	(*func)(tree->n); /*call the function*/
	if (tree->left)  /*tree's left part*/
		binary_tree_preorder(tree->left, *func);
	if (tree->right) /*tree's right part*/
		binary_tree_preorder(tree->right, *func);

}
