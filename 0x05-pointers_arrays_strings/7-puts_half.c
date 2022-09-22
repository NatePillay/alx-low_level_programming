#include "main.h"

/**
 * puts_half - function to print half
 * @str: 1 variable
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	if (*(str + i))
		i++;

	j = i / 2;

	if (i % 2 == 0)
	{
		j += 1;
	}

	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');

}
