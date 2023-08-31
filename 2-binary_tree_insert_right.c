#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Creates a new binary tree node
 * and insert in right.
 * @parent: Pointer to the parent node (NULL if creating root node)
 * @value: Value to be stored in the new node
 * Return: Pointer to the newly created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node = malloc(sizeof(binary_tree_t));

	if (!parent)
	{
		free(new_Node);
		return (NULL);
	}

	if (!new_Node)
		return (NULL);
	new_Node->n = value;
	new_Node->left = NULL;
	new_Node->right = NULL;
	new_Node->parent = parent;

	if (parent->right != NULL)
	{
		new_Node->right = parent->right;
		parent->right->parent = new_Node;
	}
	parent->right = new_Node;

	return (new_Node);
}
