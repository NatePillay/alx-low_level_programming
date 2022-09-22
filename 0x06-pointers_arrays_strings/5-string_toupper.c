#include "main.h"

/**
 * string_toupper - convert string to upper
 * @s1: variable to represent the string
 * Return: upper case letters
 */

char *string_toupper(char *s1)
{
	int i;
	int len = 0;

	while (s[i++] != '\0')
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] = s1[i] - 32;
		}
		len++;

	}
	return (s1);
}
