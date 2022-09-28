#include "main.h"

/**
 * is_prime_number - function to check if integer is a prime
 * @n: parameter taken
 * @i: second parameter
 * Return: where number is true or false
 */

int is_prime_number(int i, int n)
{
	if (n == i)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(i + 1, n));
	}
}
