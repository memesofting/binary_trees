#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree on success or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	/**
	 * lh is left height
	 * rh is right height
	 */
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
	{
		return (lh + 1);
	}
	else
	{
		return (rh + 1);
	}
}
