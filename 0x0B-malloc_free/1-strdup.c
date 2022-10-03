#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer
 * @str: data type char a pointer
 * Return: if success a string if fail NULL
 */

char *_strdup(char *str)
{

	char *c = (char *)malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (i != '\0')
	{
		c[i] = *str;
		i++;
	}
	c[i] = '\0';
	return (c);
	free(c);
}

