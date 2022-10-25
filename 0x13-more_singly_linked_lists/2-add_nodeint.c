#include "lists.h"

/**
 * add_nodeint - the function to add nodes to beg
 * @head: point to pointer head
 * @n: an integer varaible
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
	}
	else
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}

