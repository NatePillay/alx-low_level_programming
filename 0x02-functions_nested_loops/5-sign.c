#include "main.h"
/**
 * print_sign - this is the function we shall call upon
 * @n: this parameter is of data type int and will represent our number
 * Return: 0 if n is 0 and different signs for positive and negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
