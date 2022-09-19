#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: variable 1
 * Return: 0 if success
 */

void rev_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	i -= 1;

	while (i >= 0)
	{
		--i;
	}
}
