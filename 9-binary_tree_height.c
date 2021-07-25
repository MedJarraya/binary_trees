#include "binary_trees.h"

/**
 * binary_tree_height - tree height
 * @tree: pointer to the root node of the tree
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	else
		return (right);
}
