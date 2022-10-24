#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements
 * @h: var 1
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (h == NULL)
	{
		printf("Linked list is empty");
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
