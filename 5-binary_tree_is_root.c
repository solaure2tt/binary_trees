#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_is_root - cheks root
 * Description: function that checks if a node is a root
 * node: pointer to the node to check
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int answer = 0;

	if (node != NULL)
	{
		if (node->parent == NULL)
			answer = 1;
	}
	return (answer);
}
