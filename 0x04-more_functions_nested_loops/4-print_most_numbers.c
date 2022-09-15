#include "main.h"

/**
 * print_most_numbers - will print most numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i % 4 != 0)
		{
			_putchar(i);
		}
		else if (i % 2 != 0)
		{
			_putchar(i);
		}
		else
			_putchar(i);
	}
}
