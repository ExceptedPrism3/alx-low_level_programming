#include "lists.h"

/**
 * pop_listint - deletes head node and returns data
 * @head: double pointer to head
 * Return: data of head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
		return (0);

	tmp = (*head);
	(*head) = (*head)->next;
	x = tmp->n;
	free(tmp);
	return (x);
}
