#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we going to attempt to create a combo of digits 0-9
 *
 * Return: 0 and combo of numbers 0 to 9
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j <= 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
	}


