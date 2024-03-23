#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of a dlistint_t list
 * @head: double pointer to head of list
 * @n: data of new node
 * Return: address of new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *current = *head;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new_node;
    new_node->prev = current;

    return (new_node);
}
