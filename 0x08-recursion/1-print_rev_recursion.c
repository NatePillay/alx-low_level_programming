#include "main.h"

/**
 * _print_rev_recursion - we are going to reverse the string
 * @s: the character variable we shall use
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
