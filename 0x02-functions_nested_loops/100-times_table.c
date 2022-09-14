#include "main.h"
/**
 * print_times_table - function to return table of numbers
 *@n: this variable will count the  number of times we perform a trick
 * Return: list of numbers
 */
void print_times_table(int n)
{
	int j;
	int i;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				n = i * j;
				if (j != 0)
				{
					_putchar(' ');
					_putchar(';');
				}

				if (n < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(';');
					_putchar((n % 10) + '0');
				}
				else if (n >= 10 && n < 100)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				else
					_putchar((n % 10) + '0');
			}
			putchar('\n');
		}
	}
}

