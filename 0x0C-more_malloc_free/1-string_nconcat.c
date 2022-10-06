#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat the sentence
 * @s1: var 1
 * @s2: var 2
 * @n: counter int
 * Return: statemnt to end calc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i;
	char *s;

	len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
	{
		s[i++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		s[i++] = s2[i];
	}
	s[len] = '\0';

	return (s);

}

