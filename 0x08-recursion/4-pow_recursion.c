#include "main.h"

/**
 * _pow_recursion - function to raise base to power of
 * @x: base number
 * @y: exponent
 * Return: the number to its power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
