#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_height - height of a binary tree
 * Description: function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: Number
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	heightL = 0;
	heightR = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		heightL = 1 + binary_tree_height(tree->left);
	else
		heightL = 1;
	if (tree->right != NULL)
		heightR = 1 + binary_tree_height(tree->right);
	else
		heightR = 1;
	return (heightL > heightR ? heightL : heightR);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: integer value
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
