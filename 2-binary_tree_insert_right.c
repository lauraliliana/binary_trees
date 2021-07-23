#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new node into right child of parent
 * @parent: node to add a node to
 * @value: to be given to the new node
 *
 * Return: pointer to new_node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *right_node;

	if (parent)
	{
		right_node = parent->right;
		node = malloc(sizeof(binary_tree_t) * 1);

		if (node)
		{
			node->parent = parent;
			node->n = value;
			node->left = NULL;
			node->right = right_node;
			if (right_node)
				right_node->parent = node;
		}
		parent->right = node;
	}
	else
		node = NULL;
	return (node);
}
