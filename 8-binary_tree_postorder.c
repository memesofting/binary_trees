#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the root node of the tree to teaverse
 * @func: pointer to function to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}


/**
 * print - prints an integer
 * @n: integer to be printed
 */
void print(int n)
{
	printf("%d", n);
}
