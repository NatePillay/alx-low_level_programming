#include "main.h"
/**
 * print_diagonal - used to print diagonal
 * @n: the variable for rows
 * return: we want a triangle
 */

void print_diagonal(int n);
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n')
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == j)
				{
					putchar(92);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}

