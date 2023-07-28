#include <stdio.h>
#include "lists.h"

/**
 * print_list - print element of linked list
 * @h: pointer to list_t for print
 *
 * Return: n of nodes to print
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
