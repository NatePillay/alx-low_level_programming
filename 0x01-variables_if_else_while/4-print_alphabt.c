#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - create aphabet and lead ur characters
 *
 * Return: 0 and to get all letters
 */

int main(void)
{
	char ch;

	ch = 'a';
	do {
		ch <= 'z';
		putchar(ch);
		ch++;
	}	while ((ch != 'e') || (ch != 'q'));
	return (0);
}
