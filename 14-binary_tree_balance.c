#include "binary_trees.h"
/**
* binary_tree_height - counts height of binary tree
* @tree: pointer to a binary tree
* Return: 0
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	else
		return (right);

}

/**
* binary_tree_balance - measures the balance factor
* @tree: pointer to a root of binary tree
* Return: balance factor
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
