#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(i + '0');
	}
}
