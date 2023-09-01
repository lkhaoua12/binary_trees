#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to node to check if leaf.
 *
 * Return: 1 if true, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);

	return (1);
}
