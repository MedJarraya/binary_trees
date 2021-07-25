#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is it leaf
 *
 * @node: pointer to the node
 * Return: 0 fail 1 success
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	return (0);
}
