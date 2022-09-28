#include "main.h"

/**
 * _strlen_recursion - function to count string length
 * @s: variable for characters
 * Return: integer count of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s + _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
