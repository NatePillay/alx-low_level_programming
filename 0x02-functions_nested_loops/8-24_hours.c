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

	for (j = 0; j <= 59; j++)
	{
		for (i = 0; i <= 23; i++)
		{
			_putchar(i);
			_putchar(j);
			_putchar('\n');
		}
	}
}
