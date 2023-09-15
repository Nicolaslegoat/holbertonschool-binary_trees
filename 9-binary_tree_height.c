#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countright = 0, countleft = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		countleft = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		countright = 1 + binary_tree_height(tree->right);
	if (countleft > countright)
		return (countright);
	return (countleft);
}
