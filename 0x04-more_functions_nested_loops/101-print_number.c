#include "main.h"
/**
 *print_number - function to print a number
 *@n: first int
 *Return: retur a number
 */

void print_number(int n)
{

	unsigned int x;

	if (n < 0)
	{
		x = -n;
		putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}

