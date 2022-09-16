#include "main.h"
/**
 * print_diagonal - used to print diagonal
 * @n: the variable for rows
 * return: we want a triangle
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
