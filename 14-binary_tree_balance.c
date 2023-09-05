#include "binary_trees.h"
/**
 * binary_tree_heightt - Helper function to calculate the height of a tree.
 * @tree: Pointer to the tree to check it balance factor.
 * Return: height of a tree;
 */
int binary_tree_heightt(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = binary_tree_heightt(tree->left);
		right = binary_tree_heightt(tree->right);
		return ((left > right ? left : right) + 1);
	}
	return (0);
}
/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor (int).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = binary_tree_heightt(tree->left);
	right = binary_tree_heightt(tree->right);

	return (left - right);
}
