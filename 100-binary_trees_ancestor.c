#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_depth - depth of a node
 * Description: function that measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: Number
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - ancestor of two nodes
 * Description: function that finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: Node or Null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	size_t D_first, D_second;

	if (first == NULL || second == NULL)
		return (NULL);
	D_first = binary_tree_depth(first);
	D_second = binary_tree_depth(second);
	while (D_second > D_first)
	{
		D_second--;
		second = second->parent;
	}
	while (D_first > D_second)
	{
		D_first--;
		first = first->parent;
	}
	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
