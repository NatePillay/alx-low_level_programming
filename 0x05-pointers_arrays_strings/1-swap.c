#include "main.h"

/**
 * swap_int - this function will swap them around
 * @a: varaible 1
 * @b: variable 2
 * @c: variable additional
 * Return: 0 if success
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*a = *b;
	*b = c;
}
