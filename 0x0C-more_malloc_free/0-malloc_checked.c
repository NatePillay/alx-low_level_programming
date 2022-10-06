#include "main.h"

/**
 * malloc_checked - function to allocate memory in C
 * @b: integer type
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
