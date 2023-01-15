#include "hash_tables.h"

/**
 * key_index - the function to return the index of key
 * @key: key is var 1
 * @size: size is var 2
 * Return: if successful return index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index  = 0;

	index = hash_djb2(key) % size;
	return (index);
}
