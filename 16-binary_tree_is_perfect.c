#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_heightt - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Height of the tree, 0 if @tree is NULL.
 */
size_t binary_tree_heightt(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l, r;

		l = tree->left ? binary_tree_heightt(tree->left) : 0;
		r = tree->right ? binary_tree_heightt(tree->right) : 0;
		return ((l > r ? l : r) + 1);
	}
	return (0);
}
/**
 * binary_tree_is_fulll - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if @tree is NULL.
 */
int binary_tree_is_fulll(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right && tree->left)
	{
		int l, r;

		l = binary_tree_is_fulll(tree->left);
		r = binary_tree_is_fulll(tree->right);
		return (l && r);
	}

	return (0);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise or if @tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree && tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		size_t l, r;

		l = binary_tree_heightt(tree->left);
		r = binary_tree_heightt(tree->right);
		return (l == r && binary_tree_is_fulll(tree));
	}

	return (0);
}
