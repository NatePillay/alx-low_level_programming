#include "lists.h"

/**
 * add_dnodeint_end - function to add a new node to end of list
 * @head: pointer to the head
 * @n: variable to tracker elements
 * Return: the address of the new element or NULL failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = *head;
	new->next = NULL;

	if (*head)
		(*head)->next = new;

	*head = new;

	return (new);
}
