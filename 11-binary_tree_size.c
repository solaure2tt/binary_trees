#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_size - size of a binary tree
 * Description: function that measures the size of a binary tree
 * @tree: pointer to the root
 * Return: Number
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
