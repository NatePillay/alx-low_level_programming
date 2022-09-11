#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we want to only use putchar to print 1 to 10
 *
 * Return: 0 to 10 and a new line
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
