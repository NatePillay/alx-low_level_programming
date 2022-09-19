#include "main.h"

/**
 * puts2 - function print out some words
 * @str: 1 variable
 * Retur: should return a list of characters
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
		_putchar('\n');
	}
	_putchar('\n');
}
