#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer
 * @str: data type char a pointer
 * Return: if success a string if fail NULL
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	c = (char *)malloc(i * sizeof(char) + 1);

	if (c == NULL)
	{
		return (NULL);
	}


	while (j < i)
	{
		c[j] = str[j];
		j++;
	}
	c[j] = '\0';
	return (c);

}

