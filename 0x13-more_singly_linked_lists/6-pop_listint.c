#include "lists.h"

/**
 * pop_listint - function to pop the end off
 * @head: point to pointer
 * Return: removes the int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}


