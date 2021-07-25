#include "binary_trees.h"

/**
 * binary_tree_nodes - counting nodes using child
 * @tree: pointer to the root node of the tree
 * Return: counting nodes with child
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
