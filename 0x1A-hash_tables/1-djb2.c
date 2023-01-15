#include "hash_tables.c"

/**
 * hash_djb2 - this function implements djb2 algorithm
 * @str: func takes pointer to an array of unsign chars aka string
 * Return: if successful a hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
