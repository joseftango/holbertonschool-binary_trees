#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as a right chile of a given node
* @parent: pointer to the node to insert the right child in
* @value: value of the node to be created
* Return: pointer to the created node
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (!parent->right)
		parent->right = node;

	else
	{
		store = parent->right;
		parent->right = node;
		node->right = store;
		node->right->parent = node;
	}
		return (node);
}
