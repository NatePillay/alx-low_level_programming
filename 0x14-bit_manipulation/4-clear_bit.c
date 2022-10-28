#include "main.h"

/**
 * clear_bit - function to clear a bit
 * @n: var 1
 * @index: index value
 * Return: function to return cleared bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);

	return (1);
}
