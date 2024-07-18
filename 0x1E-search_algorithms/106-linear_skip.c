#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search.
 * @value: Value to search for in the skip list.
 *
 * Return: Pointer to the node containing the matched value,
 * or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next;

	if (list == NULL)
		return (NULL);

	next = list;

	do {
		list = next;
		next = next->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       next->index, next->n);
	} while (next->express && next->n < value);

	if (next->express == NULL)
	{
		list = next;
		while (next->next)
			next = next->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       list->index, next->index);

	while (list != next->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
