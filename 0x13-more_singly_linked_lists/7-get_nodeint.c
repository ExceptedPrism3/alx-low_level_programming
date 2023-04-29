#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: list
 * @index: index of the node
 * Return: returns node at index or null if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
