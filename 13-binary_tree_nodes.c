#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child
* @tree: pointer to root of the tree
* Return: number of nodes
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		count++;

	return (count);
}
