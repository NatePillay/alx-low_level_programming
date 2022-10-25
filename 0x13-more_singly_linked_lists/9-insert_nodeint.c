#include "lists.h"

/**
 * insert_nodeint_at_index - function to inset
 * @head: pointer to pointer head
 * @idx: var for position
 * @n: nodes in list
 * Return: insertion
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = (*head);
		(*head) = temp;
	}
	else
	{
		for (n = 0, ptr = (*head); n < idx - 1; n++)
		{
			ptr = ptr->next;
			if (ptr == NULL)
			{
				return (NULL);
			}
		}
		temp->next = ptr->next;
		ptr->next = temp;

	}
	return (ptr);
}
