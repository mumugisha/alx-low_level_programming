#include "lists.h"

/**
 * sum_dlistint - return sum of data of dlistint_t list
 * @head: pointer to head list
 * Return: sum of data, 0 when list empty
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *itm;
    int sum = 0;

    itm = head;

    while (itm != NULL)
    {
        sum += itm->n;
        itm = itm->next;
    }

    return sum;
}
