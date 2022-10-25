#include "lists.h"

/**
 * get_nodeint_at_index - function to get node at index
 * @head: pointer to start of list
 * @index: count var
 * Return: pointer to end of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;

	if (current == NULL)
	{
		return (NULL);
	}


	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (0);
}
