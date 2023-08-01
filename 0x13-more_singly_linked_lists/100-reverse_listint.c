#include "lists.h"

/**
 * reverse_listint - reverse linked ls
 * @head: pointer to 1st node
 *
 * Return: pointer to 1st node in new ls
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
