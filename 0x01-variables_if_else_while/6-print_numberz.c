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

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
