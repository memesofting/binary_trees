#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves on success or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left, right;

	leaves = 0;
	left = 0;
	right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL)
	{
		binary_tree_leaves(tree->left);
		left++;
	}
	if (tree->right != NULL)
	{
		binary_tree_leaves(tree->right);
		right++;
	}
	leaves = left + right;
	return (leaves);
}
