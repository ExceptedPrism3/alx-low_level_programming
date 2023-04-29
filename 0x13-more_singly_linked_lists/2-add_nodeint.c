#include "lists.h"

/**
 * add_nodeint - adds a node at the beginnint of the list
 * @head: linked list
 * @n: data we ant
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
