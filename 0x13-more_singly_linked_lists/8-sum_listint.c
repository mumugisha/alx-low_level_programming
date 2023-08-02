#include "lists.h"

/**
 * sum_listint - calculate sum of data in listint
 * @head: 1st node in linked ls
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *temp = head;

	while (temp)
	{
		a += temp->n;
		temp = temp->next;
	}

	return (a);
}
