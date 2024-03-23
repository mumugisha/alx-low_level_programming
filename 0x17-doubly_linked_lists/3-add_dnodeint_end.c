#include "lists.h"

/**
 * add_dnodeint_end - adds new node end of dlistint_t list
 * @head: double pointer to head list
 * @n: data of new node
 * Return: address of new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *h;
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    h = *head;

    if (h != NULL)
    {
	    while (h->next != NULL)
		    h = h->next;
	    h->next = new;
     }
     else
	{
		*head = new;
	}
	new->next = h;

	return (new);
}
