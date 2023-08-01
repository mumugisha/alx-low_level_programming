#include "lists.h"

/**
 * add_nodeint - add new node @ start of linked ls
 * @head: pointer to 1st node in ls
 * @n: data inserted in new node
 *
 * Return: pointer new node, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
