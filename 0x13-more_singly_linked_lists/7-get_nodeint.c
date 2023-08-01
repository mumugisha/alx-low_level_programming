#include "lists.h"

/**
 * get_nodeint_at_index - return node at certain index in ls
 * @head: 1st node in linked ls
 * @index: index of node
 *
 * Return: Point to node under searching, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);

}
