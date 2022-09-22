#include "main.h"
/**
 * print_number - numbers to print for function
 * @n: number variable
 * Return: nreturn the number if a success
 */


void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		putchar('0');
	}

	if (n / 10)

		print_number(n / 10);

	putchar(n % 10 + '0');
}
