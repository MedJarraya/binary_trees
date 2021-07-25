#include "binary_trees.h"

/**
 * binary_tree_is_full - is it full
 * @tree: pointer to the root node of the tree
 * Return: 0 not full else full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int z = 0;
	int x = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	z = binary_tree_is_full(tree->left);
	x = binary_tree_is_full(tree->right);

	if (z && x)
		return (1);

	return (0);
}
