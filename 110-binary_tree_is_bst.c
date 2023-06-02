#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * helper - Helper function to check if a binary tree is a valid BST.
 * @tree: A pointer to the root node of the tree to check.
 * @min: A pointer to the minimum value allowed in the subtree.
 * @max: A pointer to the maximum value allowed in the subtree.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */

int helper(const binary_tree_t *tree,
		const binary_tree_t *min, const binary_tree_t *max)
{
	if (tree == NULL)
		return (1);

	if ((min != NULL && tree->n <= min->n) || (max != NULL && tree->n >= max->n))
		return (0);

	return (helper(tree->left, min, tree) && helper(tree->right, tree, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (helper(tree, NULL, NULL));
}
