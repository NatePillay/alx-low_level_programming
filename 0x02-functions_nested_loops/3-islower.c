#include "main.h"
/**
 * _islower - function will verify if letter is lowercase
 *@c: will be the int we shall use as the argument of this function
 * Return: 1 for lowercase, 0 for other other
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
