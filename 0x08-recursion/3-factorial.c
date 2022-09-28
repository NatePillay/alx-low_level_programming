#include "main.h"

/**
 * factorial - function to sum the factorials
 * @n: number we will be using in our loop
 * Return: the number multiplied out
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
