#include "lists.h"
#include <stdio.h>

/**
 * listint_len - length of list func
 * @h: var 1
 * Return: count of elements
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
