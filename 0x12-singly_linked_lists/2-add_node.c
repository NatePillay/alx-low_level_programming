#include "lists.h"

/**
 * add_node - function to add nodes
 * @head: var 1
 * @str: var 2
 * Return: list appended from beginnning
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	size_t n;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);


	ptr->len = n;
	ptr->next = *head;
	*head = ptr;


	return (*head);
}
