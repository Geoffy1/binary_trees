#include "binary_trees.h"

/**
 * binary_tree_preorder - goes thru using pre-order traversal
 * @tree: tree to trav
 * @func: pointer to a funct
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
