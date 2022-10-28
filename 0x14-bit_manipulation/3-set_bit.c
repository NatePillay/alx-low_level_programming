#include "main.h"

/**
 * set_bit - function to set bit
 * @n: var 1
 * @index: index pos
 * Return: set a bit using func
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
