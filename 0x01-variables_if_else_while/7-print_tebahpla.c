#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we want to print the script in reverse
 *
 * Return: 0 and the whole alphabet backward
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
