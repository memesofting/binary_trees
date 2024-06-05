#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root of the node of tree to measure its size
 * Return: size of tree on success or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, right, left;

	size = 0;
	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;
	return (size);
}
