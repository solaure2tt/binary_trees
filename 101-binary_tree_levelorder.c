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
size_t binary_tre_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tre_height(tree->left);
	height_right = binary_tre_height(tree->right);
	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * print_levelO - visit a tree by levelorder
 * Description: function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * @lev: level
 * Return: Nothing
 */
void print_levelO(const binary_tree_t *tree, void (*func)(int), size_t lev)
{

	if (tree == NULL)
		return;
	if (lev == 1)
		func(tree->n);
	else if (lev > 1)
	{
		print_levelO(tree->left, func, lev - 1);
		print_levelO(tree->right, func, lev - 1);
	}
}

/**
 * binary_tree_levelorder - visit a tree by levelorder
 * Description: function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
        size_t i, h;

        if (tree == NULL || func == NULL)
                return;
        h = binary_tre_height(tree);
        for (i = 1; i <= h; i++)
        {
                print_levelO(tree, func, i);
        }
}
