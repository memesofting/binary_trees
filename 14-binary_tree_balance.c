#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int factor, lh, rh;

	if (tree == NULL)
	{
		return (0);
	}
	lh = tree_height(tree->left);
	rh = tree_height(tree->right);
	factor = lh - rh;
	return (factor);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree on success or 0 if tree is NULL
 */

int tree_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
	{
		return (0);
	}
	/**
	 * lh is left height
	 * rh is right height
	 */
	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	if (lh > rh)
	{
		return (lh + 1);
	}
	else
	{
		return (rh + 1);
	}
}
