#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: structure for list
 * @n: int data
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
