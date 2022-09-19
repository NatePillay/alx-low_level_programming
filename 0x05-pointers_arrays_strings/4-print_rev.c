#include "main.h"
/**
 * print_rev - function to reverse string
 * @s: first variable
 * Return: 0 if success
 */
void print_rev(char *s)
{
	int i, str, count;

	count  = 0;

	while (*s != '\0')
	{
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		str = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = str;
		_putchar(*s);
	}
	_putchar('\n');

}
