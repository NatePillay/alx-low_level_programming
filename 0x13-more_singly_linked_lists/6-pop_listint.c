#include "lists.h"

/**
 * pop_listint - function to pop the end off
 * @head: point to pointer
 * Return: head node's data or 0 if ll empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		*head = ptr->next;
		free(ptr);
		return (n);
	}
}


