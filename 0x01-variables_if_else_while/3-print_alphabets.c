#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - to put both alphabets on screen
 *
 * Return: 0 and the alphabets
 */

int main(void)
{
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
