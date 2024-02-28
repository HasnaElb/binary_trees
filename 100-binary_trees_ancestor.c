#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
		binary_tree_t *second)
{
	const binary_tree_t *ancestor_first = first, *ancestor_second = second;

	if (first == NULL || second == NULL)
		return (NULL);

	while (ancestor_first)
	{
		ancestor_second = second;
		while (ancestor_second)
		{
			if (ancestor_first == ancestor_second)
				return ((binary_tree_t *)ancestor_first);

			ancestor_second = ancestor_second->parent;
		}
		ancestor_first = ancestor_first->parent;
	}

	return (NULL);
}
