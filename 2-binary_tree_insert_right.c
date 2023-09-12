#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the created node, NULL on failure or parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (parent == NULL)
        return (NULL);

    newnode = malloc(sizeof(binary_tree_t));

    if (newnode == NULL)
        return (NULL);

    newnode->n = value;
    newnode->left = NULL;
    newnode->parent = parent;
    newnode->right = parent->right;
    parent->right = newnode;

    return (newnode);
}
