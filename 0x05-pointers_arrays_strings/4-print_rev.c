#include "main.h"
/**
 * print_rev - function to reverse string
 * @s: first variable
 * Return: 0 if success
 */
void print_rev(char *s)
{
	char *lastAddress = s

	while (*lastAddress)
	{
		++lastAddress;

		for (int i = 0; i <= lastAddress; i--)
		{
			_putchar(*s);
			_putchar('\n');
	}
	_putchar('\n');

}
