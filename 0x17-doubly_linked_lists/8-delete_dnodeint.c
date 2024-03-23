#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node to be deleted
 * Return: 1 upon success, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node = *head;
    dlistint_t *previous_node = NULL;
    unsigned int i;

    if (current_node == NULL)
        return (-1);

    if (index == 0)
    {
        *head = current_node->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current_node);
        return (1);
    }

    for (i = 0; current_node != NULL && i < index; i++)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }

    if (current_node == NULL)
        return (-1);

    previous_node->next = current_node->next;
    if (current_node->next != NULL)
        current_node->next->prev = previous_node;

    free(current_node);
    return (1);
}
