#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_is_leaf - cheks leaf
 * Description: function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int answer = 0;

	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			answer = 1;
	}
	return (answer);
}
