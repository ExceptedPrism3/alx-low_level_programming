#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: linked list
 * @index: position want to delete
 * Return: 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int i;

	if (!(*head))
		return (-1);

	tmp = (*head);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0 ; tmp != NULL && i < (index - 1) ; i++)
		tmp = tmp->next;

	if (!tmp || tmp->next == NULL)
		return (-1);

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
