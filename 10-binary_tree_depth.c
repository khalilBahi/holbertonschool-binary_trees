#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent == NULL || tree == NULL)
	{
		return (0);
	}
	else
	{
		depth += binary_tree_depth(tree->parent) + 1;

		return (depth);
	}
}
