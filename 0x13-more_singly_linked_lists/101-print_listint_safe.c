#include "lists.h"

/**
 * print_listint_safe - function to print list
 * @head: first var
 * Return: list of size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;


	while (temp != NULL)
	{
		printf("[%p] %d", temp->next, temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
