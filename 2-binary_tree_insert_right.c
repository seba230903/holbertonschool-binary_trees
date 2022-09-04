#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node
 * at the right.
 * @parent: is the parent node.
 * @value:is the value to insert
 * Return: a new node, or NULL if fail.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right = NULL;

	if (!parent)
		return (NULL);

	new_node_right = malloc(sizeof(binary_tree_t));
	if (!new_node_right)
		return (NULL);
	new_node_right->n = value;
	if (parent->right) /*si ya hay uno a la derecha*/
	{
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;
	}
	else
		new_node_right->right = NULL;

	new_node_right->parent = parent; /*point to the father*/
	new_node_right->left = NULL;	/*point to the left*/

	parent->right = new_node_right; /*father's point*/

	return (new_node_right);

}
