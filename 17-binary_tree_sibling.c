#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a specific node
* @node: node to find it sibling
* Return: pointer to the sibling node
**/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	else
		return (node->parent->left);

	return (NULL);

}
