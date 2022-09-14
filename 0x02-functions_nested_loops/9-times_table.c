#include "main.h"
/**
 * times_table - function to add up time tables
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, k;

	k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j / 10) + '0');
			}
			else if (k < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((k % 10) + '0');

			}
			else
				_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
