#include <stdio.h>
#include "main.h"

/**
 * print_array - function to return array
 * @a: var 1
 * @n: var 2
 * Return: array of numbers
 */

void print_array(int *a, int n)
{
	int length = sizeof(array) / sizeof(array[0]);

	for (n = 0; n < length; n++)
	{
		printf("%d, ", array[n]);
	}
}
