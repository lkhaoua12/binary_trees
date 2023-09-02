#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The depth of the binary tree. If tree is NULL, return -1.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r;

		l = tree->left ? (1 + binary_tree_depth(tree->left)) : 0;
		r = tree->right ? (1 + binary_tree_depth(tree->right)) : 0;
		return (l > r ? l : r);
	}
	return (0);
}
