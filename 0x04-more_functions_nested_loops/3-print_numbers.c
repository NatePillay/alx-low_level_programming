#include "main.h"
/**
 * print_numbers - function to return numberz
 *
 * Return: 0 if success
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

