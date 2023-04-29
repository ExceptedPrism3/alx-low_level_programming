#include "lists.h"

/**
 * listint_len - finds the length of the list
 * @h: linked list
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
