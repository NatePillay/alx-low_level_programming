#include "main.h"
/**
 * print_diagonal - used to print diagonal
 * @n: the variable for rows
 * return: we want a triangle
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');

			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}


