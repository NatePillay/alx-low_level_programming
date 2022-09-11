#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - print all numbers up to base 10
 *
 * Return: 0 and all numbers up to base 10
 */

int main(void)
{
	int n = 0;

	while (n <= 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}

