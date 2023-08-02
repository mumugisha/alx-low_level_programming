#include "lists.h"

/**
 * find_listint_loop - find loop in linked ls
 * @head: linked ls for searching
 *
 * Return: address node where loop begins, Otherwise ULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}
	}

	return (NULL);
}


