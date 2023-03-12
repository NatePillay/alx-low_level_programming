#include "lists.h"

/**
 * delete_dnodeint_at_index - func to delete node
 * @head: pointer to the head
 * @index: position variable
 * Return: 1 if succeed and -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *prev_node, *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		if (next_node != NULL)
			next_node->prev = NULL;
		free(*head);
		*head = next_node;
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);

	prev_node = current_node->prev;
	next_node = current_node->next;
	if (prev_node != NULL)
		prev_node->next = next_node;
	if (next_node != NULL)
		next_node->prev = prev_node;
	free(current_node);

	return (1);
}
