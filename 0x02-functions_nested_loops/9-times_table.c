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
			_putchar(k);
		}
		_putchar('\n');
	}
}
