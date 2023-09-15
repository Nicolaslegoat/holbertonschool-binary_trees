#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if its full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int countleft;
	int countright;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		countleft = (binary_tree_is_full(tree->left));
	else
		countleft = 0;
	if (tree->right != NULL)
		countright = (binary_tree_is_full(tree->right));
	else
		countright = 0;
	if ((countright == 0 && countleft == 0) || (countleft != countright))
		return (0);
	return (1);
}
