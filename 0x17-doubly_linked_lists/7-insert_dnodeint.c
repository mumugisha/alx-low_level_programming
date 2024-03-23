#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    if (!h)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n);

    for (i = 0; i < idx - 1 && current; i++)
        current = current->next;

    if (!current)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next)
        current->next->prev = new_node;
    current->next = new_node;

    return new_node;
}
