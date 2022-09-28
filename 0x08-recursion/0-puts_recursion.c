#include "main.h"

/**
 * _puts_recursion - takes argument s and returns a string
 * @s: variable to rep characters
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

