#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we want to only use putchar to print 1 to 10
 *
 * Return: 0 to 10 and a new line
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
