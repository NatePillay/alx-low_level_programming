#include "main.h"
/**
 * _strchr - function to find occurence of charcter
 * @s: string variable
 * @c: character variable
 * Return: the charcter in memory address of string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == NULL)
	{
		return (NULL);
	}

	while (s[i] != '\0')
	{
		for (i = 97; i <= 122; i++)
		{
			if s[i] = c[i];
			{
				_putchar(s[i] + i);
			}
		}
	}
	return (s[i]);
}


