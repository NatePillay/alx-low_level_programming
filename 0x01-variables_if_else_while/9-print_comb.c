#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - want to produce a list of numbers with spaces and commas
 *
 * Return: 0 and a list of numbers in ascending order
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
