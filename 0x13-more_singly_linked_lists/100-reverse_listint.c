#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: double pointer to head
 * Return: pointer to listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *prev_node;

	prev_node = *head;
	if (!prev_node->next || !prev_node)
		return (prev_node);
	current_node = prev_node->next;
	prev_node->next = NULL;
	while (current_node)
	{
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = current_node->next;
	}
	return (current_node);
}
