#include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: linked l ist
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || *head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	*head = NULL;
}
