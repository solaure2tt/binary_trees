#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_node - creates a binary tree node
 * Description: function that creates a binary trees
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Null or pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	return (node);
}
