#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_uncle - finds he uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Number
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (grandparent->left == node->parent)
		return (grandparent->right);
	if (grandparent->right == node->parent)
		return (grandparent->left);
	return (NULL);
}
