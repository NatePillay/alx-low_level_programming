#include "main.h"

/**
 * binary_to_uint - function to create binary figure
 * @b: variable we use for each character
 * Return: unsigned integer from binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (!b)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
		i++;
	}
	return (n);
}

