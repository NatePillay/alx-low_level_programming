#include <stdlib.h>
#include <stdio.h>
#include  "hash_tables.h"


/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashArray = NULL;

	hashArray = malloc(sizeof(hash_table_t));

	if (hashArray == NULL)
		return (NULL);

	hashArray->size = size;
	hashArray->array = malloc(sizeof(hash_node_t *) * size);
	if (hashArray->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashArray->array[i] = NULL;

	return (hashArray);
}
