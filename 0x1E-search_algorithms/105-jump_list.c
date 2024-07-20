#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list
 * Using jump search algorithm
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, a = 0, b;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	b = (size_t)sqrt((double)size);

	do {
		prev = list;
		a++;
		index = a * b;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index > list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (list->next && index < size && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
