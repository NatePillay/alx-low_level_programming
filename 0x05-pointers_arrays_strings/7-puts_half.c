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

	if (j % 2)
		j += 1;

	while (j < i)
	{
		_putchar(*(str + i));
		j++;
	}
	_putchar('\n');

}
