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

	if (n > 0 || n < 15)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				i = i * n;
				j = j * n;
				putchar(i * j + ' ');
				putchar(';');
			}
			putchar('\n');
		}
	}
	else
		putchar(' ');
}

