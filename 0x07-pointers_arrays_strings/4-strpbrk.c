#include "main.h"

/**
 * _strpbrk - function to return the string and first char
 * @s: string variable
 * @accept: string variable to accept
 * Return: a pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	do {
		if (*s == *accept)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
