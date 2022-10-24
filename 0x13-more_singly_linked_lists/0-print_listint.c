#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements
 * @h: var 1
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count  = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
