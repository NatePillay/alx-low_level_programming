#include "lists.h"

/**
 * add_dnodeint - function that adds  a new node
 * @head: pointer to the head of list
 * @n: variable to count number of nodes
 * Return: address of new node or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
