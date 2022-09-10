#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - we testing adding alphabat using putchar
 *
 * Return: 0 and the alphabet
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


