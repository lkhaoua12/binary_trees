#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree->right || tree->left)
	{
		size_t l, r;
		l = tree->left ? binary_tree_nodes(tree->left) : 0;
		r = tree->right ? binary_tree_nodes(tree->right) : 0;
		return (1 + l + r);
	}
	return (0);
}
