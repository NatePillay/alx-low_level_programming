#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: pointer to head pointer
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = NULL;
	temp = NULL;


	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = ptr;
	}

	*head = temp;
	return (*head);
}



