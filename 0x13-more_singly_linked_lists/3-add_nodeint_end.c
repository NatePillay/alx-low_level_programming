#include "lists.h"

/**
 * add_nodeint_end - adding a node to the end
 * @head: the beginning
 * @n: var
 * Return: list of integers added from the back
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ptr;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	return (newnode);
}
