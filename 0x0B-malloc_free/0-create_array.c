#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to save mem for the char
 * @size: the int var
 * @c: the char
 * Return: pointer of array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
