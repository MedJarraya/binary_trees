#include "binary_trees.h"

/**
 * binary_tree_uncle - finding uncle of nodes
 * @node: pointer to the node
 * Return: either pointer or Null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *Left_uncle = NULL, *Right_uncle = NULL;

	if (node && node->parent && node->parent->parent)
	{
		Left_uncle = node->parent->parent->left;
		if (Left_uncle && Left_uncle != node->parent)
			return (node->parent->parent->left);

		Right_uncle = node->parent->parent->right;
		if (Right_uncle && Right_uncle != node->parent)
			return (node->parent->parent->right);
	}

	return (NULL);
}
