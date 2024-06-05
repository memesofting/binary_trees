#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_right, count_left;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count_left = binary_tree_nodes(tree->left);
		count_right = binary_tree_nodes(tree->right);
		return (count_left + count_right + 1);
	}
	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);
	return (count_left + count_right);
}
