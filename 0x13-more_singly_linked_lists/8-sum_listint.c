#include "lists.h"

/**
 * sum_listint - sums the ints in list
 * @head: list
 * Return: the sum of the ints
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
