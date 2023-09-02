#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The size of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r;

		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		return (l + r + 1);
	}
	return (0);
}
