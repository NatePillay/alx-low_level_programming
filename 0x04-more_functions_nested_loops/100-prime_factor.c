#include <stdlib.h>
#include <stdio.h>
/**
 * primefactors - we want to write a function to find prime factors
 * @num: number we dealing with
 * Return prime factors
 */

void primefactors(int num)
{
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			printf("%d", count);
			num = num / count;
		}
	}
	printf("\n");
}

int main(void)
{
	long int num;

	num = 612852475143;

	primefactors(num);
	return (0);
}
