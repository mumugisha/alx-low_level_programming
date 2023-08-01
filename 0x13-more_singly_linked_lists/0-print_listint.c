#include "lists.h"

/**
 * print_listint - print elements of linked lists
 * @h: ls listint_t to print
 *
 * Return: N of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
