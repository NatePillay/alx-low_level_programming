#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - function to take two strings and make 1
 * @s1: var 1
 * @s2: var 2
 * Return: if success result in string otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, size;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = (len1 + len2 + 1);

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[size - 1] = '\0';

	return (s);



}


