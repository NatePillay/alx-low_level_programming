#include "main.h"
/**
 * Description: main - print the whole alphabet out
 *
 * Return: the alphabet and 0 if success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

