#include "lists.h"

/**
 * listint_len - return n elements in linked ls
 * @h: linked ls listint_t
 *
 * Return: n of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
