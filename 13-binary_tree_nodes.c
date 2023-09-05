#include "binary_trees.h"
/**
 * binary_tree_nodes - Check the number of nodes of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The number of nodes in the tree. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->right || tree->left))
	{
		size_t l, r;

		l = tree->left ? binary_tree_nodes(tree->left) : 0;
		r = tree->right ? binary_tree_nodes(tree->right) : 0;
		return (1 + l + r);
	}
	return (0);
}
