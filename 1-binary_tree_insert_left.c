#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *aux;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->right = NULL;
	newnode->n = value;
	aux = parent->left;
	newnode->left = aux;
	newnode->parent = parent;

	if (aux != NULL)
		aux->parent = newnode;

	return (newnode);
}
