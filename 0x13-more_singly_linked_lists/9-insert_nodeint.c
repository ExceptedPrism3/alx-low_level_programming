#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: linked list
 * @idx: posisiton to insert
 * @n: data
 * Return: address of new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	listint_t *tmp2;
	listint_t *len;
	unsigned int length = 0, i = 0;

	len = *head;
	while (len)
	{
		length++;
		len = len->next;
	}

	if (idx > length)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	tmp2 = tmp;
	tmp = new_node;
	new_node = tmp2;
	return (tmp2);
}
