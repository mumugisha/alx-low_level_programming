#include "lists.h"

/**
 * free_listint - free linked ls
 * @head: listint_t ls to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
