#include "binary_trees.h"
/**
* binary_tree_is_full - checks whether binary tree is full
* @tree: pointer to a tree
* Return: 1 or 0
**/

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if ((!tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
		if (binary_tree_is_full(tree->left) == 1 &&
		binary_tree_is_full(tree->right) == 1)
			return (1);

	return (0);
}
