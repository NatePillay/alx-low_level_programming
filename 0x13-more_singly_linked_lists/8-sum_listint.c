#include "lists.h"

/**
 * sum_listint - a function to sum all members of list
 * @head: pointer to head
 * Return: integer value from sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	tmp = head;
	sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
