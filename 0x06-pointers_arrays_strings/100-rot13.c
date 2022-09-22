#include "main.h"

/**
 * rot13 -function to encrypt code
 * @c: what we will use to cycle through
 * Return: a string if successful
 */

char *rot13(char *c)
{
	int i, n;
	char ch;

	while (*(c + i) != '\0')
	{
		i++;
	}

	for (i = 0; i < *(c + i) ; i++)
	{
		n = c[i];
		n = n - 13;
		if (n < 65)
		{
			n = 91 - (65 - n);
		       ch = n;
		       c[i] = ch;
		}
		else
		{
			ch = n;
			c[i] = ch;
		}
	}
	return (c);
}
