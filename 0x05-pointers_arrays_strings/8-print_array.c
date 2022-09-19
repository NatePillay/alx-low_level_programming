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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *a[i]);
		
	}
	_putchar('\n');
}
