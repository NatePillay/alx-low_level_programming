#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list and count
 * @h: var
 * Return: list and count
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
