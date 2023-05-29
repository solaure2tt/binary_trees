#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_insert_right - insert in the right of a binary tree node
 * Description: function that inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Null or pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *N1;

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent != NULL)
		if (parent->right == NULL)
		{
			parent->right = node;
			node->parent = parent;
		}
		else
		{
			N1 = (binary_tree_t *) malloc(sizeof(binary_tree_t));
			N1->n = parent->right->n;
			N1->left = parent->right->left;
			N1->right = parent->right->right;
			free(parent->right);
			node->right = N1;
			N1->parent = node;
			parent->right = node;
			node->parent = parent;
		}
	else
		return (NULL);
	return (node);
}
