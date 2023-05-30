#include "binary.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: pointer to the root to traverse
 * Return: integer value
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}