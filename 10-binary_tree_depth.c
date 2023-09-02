#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the leaf node of the tree to measure.
 *
 * Return: The depth of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l;

		l = tree->parent ? (1 + binary_tree_depth(tree->parent)) : 0;
		return (l);
	}
	return (0);
}
