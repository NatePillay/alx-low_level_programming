#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - summing up diagonals
 * @a: the array of numbers
 * @size: size to take into account
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size + 1) * i];
		d2 += a[(size - 1) * (i + 1)];
	}

	printf("%d %d\n", d1, d2);
}
