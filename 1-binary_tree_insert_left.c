#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as left child of a node
* @parent: pointer to the node to insert the left child in
* @value: value of the node as left child
* Return: the node created
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *store;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
		if (!node)
			return (NULL);

		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;

	if (!parent->left)
		parent->left = node;

	else
	{
		store = parent->left;
		parent->left = node;
		node->left = store;
		node->left->parent = node;

	}

	return (node);
}
