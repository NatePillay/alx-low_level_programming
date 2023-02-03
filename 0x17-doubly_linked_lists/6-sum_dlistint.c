#include "lists.h"

/**
 * sum_dlistint - function to sum the nodes
 * @head: the pointer to head
 * Return:sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
