#include "lists.h"

/**
 * free_dlistint - function that frees dlistint
 * @head: a pointer to the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *current = head;


	while (temp)
	{
		temp = temp->next;
		free(current);
		current = temp;
	}
}
