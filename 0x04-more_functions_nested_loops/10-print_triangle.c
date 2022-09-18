#include "main.h"
/**
 * print_triangle - function to print a triangle
 * @size: number of rows
 * Return: triangle success
 */

void print_triangle(int size)
{
	int i, j, s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (s = 1; j < (size - i); s++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
