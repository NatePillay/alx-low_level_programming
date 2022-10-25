#include "lists.h"

/**
 * free_listint - func to free linekd list
 * @head: variable of head
 * Return: nothing
 */


void free_listint(listint_t *head)
{
	listint_t *newnode;

	while ((newnode = head) != NULL)
	{
		head = head->next;
		free(newnode);
	}
}

