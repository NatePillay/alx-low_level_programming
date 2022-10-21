#include "lists.h"

/**
 * list_len - lenght of list
 * @h: var
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
