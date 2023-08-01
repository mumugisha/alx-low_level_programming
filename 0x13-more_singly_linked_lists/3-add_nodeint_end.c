#include "lists.h"

/**
 * add_nodeint_end - add node @ end of linked ls
 * @head: pointer to 1st element
 * @n: data to insert new element
 *
 * Return: pointer to node, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
