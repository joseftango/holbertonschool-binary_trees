#include "binary_trees.h"
/**
* depth - calculate the depth
* @tree: pointer to the root
* Return: depth
**/

int depth(const binary_tree_t *tree)
{
	int d = 0;

while (tree != NULL)
{
	d++;
	tree = tree->left;
}
	return (d);
}

/**
* is_perfect - checks whether binary tree is perfect
* @tree: pointer to the given binary tree
* @d: depth of a tree
* @level: level of each node
* Return: 1 or 0
**/

int is_perfect(const binary_tree_t *tree, int d, int level)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		if (d == level + 1)
			return (1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, d, level + 1)
	&& is_perfect(tree->right, d, level + 1));

}

/**
* binary_tree_is_perfect - checks whether binary tree is perfect
* @tree: pointer to the given binary tree
* Return: 1 or 0
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d = depth(tree);

	return (is_perfect(tree, d, 0));
}
