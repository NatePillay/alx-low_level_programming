#include "main.h"

/**
 * flip_bits - function to flip that bit
 * @n: var 1
 * @m: var 2
 * Return: flip the bit to get to new number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
