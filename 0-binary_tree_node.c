#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: is the paretn node.
 * @value: is the value to insert.
 *
 * Return: The new node, or NULL if fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	if (parent)
		new_node->parent = parent;
	else
		new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);

}
