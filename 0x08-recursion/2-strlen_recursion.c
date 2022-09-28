#include "main.h"

/**
 * _strlen_recursion - function to count string length
 * @s: variable for characters
 * Return: integer count of string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s++));
	}
}
