#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_heigh, right_heigh;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_heigh = binary_tree_height(tree->left);

	right_heigh = binary_tree_height(tree->right);

	if (left_heigh > right_heigh)
		return (left_heigh + 1);

	else
		return (right_heigh + 1);
}
