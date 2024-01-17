#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the binary tree, or 0 if the tree is NULL
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int dist = 0, dist1 = 0;

	if (tree == NULL)
		return (0);

	dist1 = binary_tree_height(tree->left);
	dist = binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (dist1 >= dist)
		return (dist1 + 1);
	else
		return (dist + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL))
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) && (r == l))
	{
		return (1);
	}

	return (0);
}
