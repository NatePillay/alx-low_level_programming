#include "main.h"
/**
 * print_line - function to print a line of _
 * @n: n will act as the number of integers
 * Return: 0 and a line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
		_putchar('\n');

	}
	return (0);
}

