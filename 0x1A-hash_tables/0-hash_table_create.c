#include  "hash_tables.h"

/**
 * hash_table_create - this is creating a hash table
 * @size: integer for size of the array
 * Return: If an error occurs - NULL otherwise a pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_create;
	unsigned long int i;

	/*allocated the space for the hash table*/
	hash_table_create = malloc(sizeof(hash_table_t));

	if (hash_table_create == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_create->array[i] = NULL
	}

	return (hash_table_created);
}
