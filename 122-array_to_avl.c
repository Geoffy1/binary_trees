#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree
 * @array: array to create from
 * @size: size
 *
 * Return: a pointer to the root node
 * or NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
