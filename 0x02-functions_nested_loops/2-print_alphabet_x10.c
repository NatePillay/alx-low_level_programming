#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	if (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++
	}
	_putchar('\n');
}
