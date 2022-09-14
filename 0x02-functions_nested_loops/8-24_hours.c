#include "main.h"
/**
 * jack_bauer - this function will display all time
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
