#include "binary_trees.h"
/**
 * bth - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
*/
size_t bth(const binary_tree_t *tree)
{
	size_t l_heigh, r_heigh;

	if (tree == NULL)
		return (0);

	l_heigh = bth(tree->left);
	r_heigh = bth(tree->right);

	if (l_heigh > r_heigh)
		return (l_heigh + 1);
	else
		return (r_heigh + 1);

}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 * Return: The balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = bth(tree->left);
	right_height = bth(tree->right);

	return (left_height - right_height);
}
