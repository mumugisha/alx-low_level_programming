#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index in a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to retrieve (starts from 0)
 * Return: pointer to the node at the specified index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int n = 0;

    if (head == NULL)
        return (NULL);
   
    while (head->prev != NULL)
        head = head->prev;
    
    while (head != NULL)
    {
        if (n == index)
            break;
        head = head->next;
        n++;
    }

    return (head);
}
