#include "main.h"
/**
 * _isupper  - function to check for uppercase
 * @c: character to check coniditon with
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		putchar(1);
	}
	else
	{
		putchar(0);
	}
	return (0);
}
