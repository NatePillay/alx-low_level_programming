#include "main.h"

/**
 * _isdigit - function to check if its a number
 * @c: number variable
 * Return: True or False
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

