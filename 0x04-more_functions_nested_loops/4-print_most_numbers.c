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
		if (i % 4 != 0 && i != 2)
		{
			_putchar(i);
		}
	} 
	_putchar('\n');

}
