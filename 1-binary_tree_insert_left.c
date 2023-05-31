#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_insert_left - insert in the left of a binary tree node
 * Description: function that inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Null or pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *N1;

	if (parent != NULL)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
			return (NULL);
		node->n = value;
		node->right = NULL;
		if (parent->left == NULL)
		{
			parent->left = node;
			node->parent = parent;
			node->left = NULL;
		}
		else
		{
			N1 = (binary_tree_t *) malloc(sizeof(binary_tree_t));
			N1->n = parent->left->n;
			N1->left = parent->left->left;
			N1->right = parent->left->right;
			free(parent->left);
			node->left = N1;
			N1->parent = node;
			parent->left = node;
			node->parent = parent;
		}
	}
	else
		return (NULL);
	return (node);
}
