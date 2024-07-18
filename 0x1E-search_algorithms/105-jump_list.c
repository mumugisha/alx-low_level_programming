#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list
 * using jump search algorithm
 *
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, a = 0, b = (size_t)sqrt((double)size);
	listint_t *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	do {
		prev = list;
		a++;
		idx = a * b;

		while (list->next && list->idx < idx)
			list = list->next;

		if (list->next == NULL && idx != list->idx)
			idx = list->idx;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->idx, (int)list->idx);

	for (; prev && prev->idx <= list->idx; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->idx, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
