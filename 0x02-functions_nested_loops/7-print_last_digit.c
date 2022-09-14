#include "main.h"
/**
 * print_last_digit - this function will find last digit
 * @n: paramter we give our functon
 * Return: to get the result of print_last_digit
 */
int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
	_putchar(n % 10 + '0');
	return (n % 10);
	}
	else
	{
	n = (n * (-1));
	_putchar(n % 10 + '0');
	return (n % 10);
	}
}
