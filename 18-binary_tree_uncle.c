#include "binary_trees.h"
/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Pointer to the sibling node,
 *	   if node is NULL or the parent is NULL, return NULL,
 *	   if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);

	return (node->parent->left);
}

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Pointer to the uncle node,
 *	   if node is NULL, return NULL,
 *	   If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
