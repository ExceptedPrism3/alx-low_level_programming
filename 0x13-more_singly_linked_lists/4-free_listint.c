#include "lists.h"

/**
 * free_listint - free the list
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}

