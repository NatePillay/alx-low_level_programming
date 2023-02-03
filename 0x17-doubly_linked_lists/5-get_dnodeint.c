#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node in the list
 * @head: pointer to the head of list
 * @index: number of nodes in the list
 * Return: returns a pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *first_pointer = head;
	unsigned int i;

	for (i = 0; first_pointer && i < index; i++)
	{
		first_pointer = first_pointer->next;
	}

	while (i != index)
	{
		return (NULL);
	}

	return (first_pointer);
}
