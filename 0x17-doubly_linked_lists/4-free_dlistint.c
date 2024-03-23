#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to head list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL) {
		while (head->prev != NULL) {
			head = head->prev;
		}

		while (head != NULL) {
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
