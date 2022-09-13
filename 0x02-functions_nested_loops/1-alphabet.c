#include "main.h"
/**
 * description: function to print whole alphabet
 *
 * Return: the alphabet and 0 if success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

