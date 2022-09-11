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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
