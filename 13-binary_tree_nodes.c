#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_leaves - count leaves
 * Description: function that counts the leaves in a binary tree
 * @tree: pointer to the root
 * Return: Number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


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

/**
 * binary_tree_nodes - count nods with at least 1 leaf
 * Description: function that  counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root
 * Return: Number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
