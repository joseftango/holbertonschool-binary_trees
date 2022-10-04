#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to root of binary tree
* Return: height or 0
**/

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0 - 1);

	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	else
		return (right + 1);

}
