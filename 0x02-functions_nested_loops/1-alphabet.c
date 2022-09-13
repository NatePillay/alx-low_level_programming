#include "main.h"
/**
 * Description: main - print the whole alphabet out
 *
 * Return: the alphabet and 0 if success
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for (ch = 'a', ch <= 'z'; ch++)
	{
		putchar(ch[i]);
	}
	return 0;
}

