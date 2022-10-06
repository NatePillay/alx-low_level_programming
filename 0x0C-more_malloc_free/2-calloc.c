#include "main.h"

/**
 * _calloc - function we use allocate memory of array
 * @nmemb: 1 var
 * @size: 2 var
 * Return: pointer to allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
