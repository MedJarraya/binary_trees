#include "binary_trees.h"

/**
 * binary_tree_node - tree binary
 *
 * @parent: pointer to the parent node of the node
 * @value: the value to put in the new node
 *
 * Return: pointer of NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	tree = malloc(sizeof(binary_tree_t));
	if (tree)
	{
		tree->n = value;
		tree->parent = parent;
		tree->left = NULL;
		tree->right = NULL;
	}

	return (tree);
}
