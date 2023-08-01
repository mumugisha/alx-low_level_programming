#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer to 1st element
 *
 * Return: 0 if ls is empty,
 * data inside elements deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}
