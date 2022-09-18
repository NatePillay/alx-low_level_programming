#include "main.h"
/**
 * more_numbers - function to create more numbers
 *
 * Return: 0 if success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 14)
			{
				putchar((j / 10) + 48);

			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
