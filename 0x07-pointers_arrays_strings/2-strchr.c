#include "main.h"
/**
 * _strchr - function to find occurence of charcter
 * @s: string variable
 * @c: character variable
 * Return: the charcter in memory address of string
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
		{
			return s;
		}
	} while (*s++);

	return (0);

}


