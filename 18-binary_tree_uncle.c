#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a specific node
* @node: pointer to the node to find the uncle
* Return: pointer to the uncle
**/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if ((!node || !node->parent))
		return (NULL);

	if (node == node->parent->parent->left->left ||
	node == node->parent->parent->left->right)
		return (node->parent->parent->right);

	if (node == node->parent->parent->right->right ||
	node == node->parent->parent->right->left)
		return (node->parent->parent->left);

	return (NULL);
}
