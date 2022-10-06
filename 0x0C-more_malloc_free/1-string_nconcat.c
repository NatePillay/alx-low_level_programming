#include "main.h"
#include <string.h>

/**
 * string_nconcat - concat the sentence
 * @s1: var 1
 * @s2: var 2
 * @n: counter int
 * Return: statemnt to end calc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len, size;
	char *s;

	n = size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (size < 0)
		return (NULL);
	if (size >= strlen(s2))
	{
		size = strlen(s2);
	}

	len = strlen(s1) + size + 1;

	s = malloc(size * sizeof(*s));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size ; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';

}

