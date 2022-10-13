#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - sum all valus pased to it
 * @n: int
 * Return: returns sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i <= n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);

	return (sum);
}
