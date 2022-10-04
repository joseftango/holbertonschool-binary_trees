#include "binary_trees.h"
/**
* binary_tree_leaves - counts the number of leaves node
* @tree: pointer to root node
* Return: number of leaf node
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count_l = 0;

	if (!tree)
		return (0);
 
	count_l += binary_tree_leaves(tree->left);
	count_l += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		count_l += 1;

	return (count_l);
}
