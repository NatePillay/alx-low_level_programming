#include "main.h"

/**
 * _sqrt_recursion - function to be used for square root
 * @n: variable to root
 * @x: count variable
 * Return: integer value
 */

int _sqrt_recursion(int n, int x)
{

	if (x % (n / x) != 0)
	{
		return (-1);
	}
	else
	{
		return (0 + _sqrt_recursion(n, x + 1));
	}
}
