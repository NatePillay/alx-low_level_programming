#include "main.h"
#include <stdio.h>
/**
 * print_to_98 function for all natural numbers
 * @n: the number to start counting from
 * Return: void return 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			_putchar(n);
		_putchar(98);
	}
	else
	{
		for (n = n; n > 98; n--)
			_putchar(n);
		putchar(n);
	}
}


