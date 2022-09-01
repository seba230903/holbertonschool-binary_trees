#include "binary_trees.h"

/**
 *  binary_tree_delete - Write a function that inserts a node
 * as the left-child of another node.
 * @tree: is the binary tree to delete.
 *
 * Return: Always void..
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left) /*move to the left*/
		binary_tree_delete(tree->left);
	if (tree->right) /*move to the right*/
		binary_tree_delete(tree->right);
	free(tree);
}
