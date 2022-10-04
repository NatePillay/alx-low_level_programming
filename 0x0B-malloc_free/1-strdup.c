#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer
 * @str: data type char a pointer
 * Return: if success a string if fail NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int m = 0;
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


	while (m < i)
	{
		c[m] = str[m];
		m++;
	}
	c[m] = '\0';
	return (c);

}

