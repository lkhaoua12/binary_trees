#include "binary_trees.h"
#include <stdlib.h>

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
