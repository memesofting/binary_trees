#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointert to the node to insert the left child in
 * @value: value to be stored in the new node
 * Return: pointer to the created node on failure
 * or NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
	{
		node->left = NULL;
	}
	parent->left = node;
	return (node);
}
