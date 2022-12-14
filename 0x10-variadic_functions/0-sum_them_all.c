#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all valus pased to it
 * @n: int
 * Return: returns sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
