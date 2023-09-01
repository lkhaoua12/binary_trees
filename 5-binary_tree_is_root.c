#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if a node is a root
 * @node: Pointer to node to check if root.
 *
 * Return: 1 if true, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
