#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node (NULL if creating root node)
 * @value: Value to be stored in the new node
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node = malloc(sizeof(binary_tree_t));

	if (!new_Node)
		return (NULL);
	new_Node->n = value;
	new_Node->left = NULL;
	new_Node->right = NULL;
	new_Node->parent = parent;

	if (parent && parent->left == NULL)
		parent->left = new_Node;

	return (new_Node);
}
