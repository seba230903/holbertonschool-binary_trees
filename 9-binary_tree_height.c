#include "binary_trees.h"
/**
 * binary_tree_height - checks the height of a node
 * @tree: tree node
 * Return: 0 on failure, height(@cnt) on success.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        int cnt = 0;
        if (tree)
        {
                if (tree->left)
                {
                        binary_tree_height(tree->left);
                        cnt++;
                }
                if (tree->right)
                {
                        binary_tree_height(tree->right);
                        cnt++;
                }
        }
        return (cnt);
}
