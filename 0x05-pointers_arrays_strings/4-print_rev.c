#include "main.h"
/**
 * print_rev - function to reverse string
 * @s: first variable
 * Return: 0 if success
 */
void print_rev(char *s)
{
	int i  = 0;

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
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
