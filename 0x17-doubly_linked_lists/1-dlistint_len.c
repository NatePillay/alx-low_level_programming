#include "lists.h"

/**
 * dlistint_len - function that returns no. of ele in list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	while (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
