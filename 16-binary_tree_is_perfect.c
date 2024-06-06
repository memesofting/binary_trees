#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect or 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_depth;

	if (tree == NULL)
	{
		return (0);
	}

	tree_depth = node_depth(tree);
	return (perfect(tree, tree_depth, 0));
}

/**
 * perfect - checks if a binary tree node is perfect
 * @node: pointer to node to check
 * @d: depth of node
 * @level: level of node in tree
 * Return: 1 if perfect or 0 if nnot perfect
 */
int perfect(const binary_tree_t *node, int d, int level)
{
	if (node == NULL)
	{
		return (1);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (d == level + 1);
	}
	if (node->left == NULL || node->right == NULL)
	{
		return (0);
	}
	return (perfect(node->left, d, level + 1) &&
	perfect(node->right, d, level + 1));
}

/**
 * node_depth - measures the depth of a node in a binary tree
 * @node: pointer to node to measure its depth
 * Return: depth of node
 */
int node_depth(const binary_tree_t *node)
{
	int depth;

	depth = 0;
	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}
