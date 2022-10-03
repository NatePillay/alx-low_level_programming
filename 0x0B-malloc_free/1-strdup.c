#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer
 * @str: data type char a pointer
 * Return: if success a string if fail NULL
 */

char *_strdup(char *str)
{
	unsigned int size;

	char *c;

	c = ((char *)malloc(sizeof(char) * size));

	if (str == NULL)
	{
		return (NULL);
	}
	unsigned int i = 0;

	while (i != '\0')
	{
		c[i] = *str;
		i++;
	}
	c[i] = '\0';
	return (c);
}

