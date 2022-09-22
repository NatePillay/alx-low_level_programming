#include "main.h"

/**
 * reverse_array - take array and reverse its order
 * @a: variable to rep array
 * @n: new count variable
 * Return: reverse array
 */


void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i <= n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
	}
}
