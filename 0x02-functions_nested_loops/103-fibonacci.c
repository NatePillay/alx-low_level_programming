#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we going to sum up all even numbers
 *
 * Return: we only want even numbers
 */
int main(void)
{
	long int i, n, sum;
	long int t1 = 1, t2 = 2;
	long int term = t1 + t2;

	n = 33;
	sum = 0;

	for (i = 1;  i <= n; ++i)
	{
		if (t1 < 4000000 && (t1 % 2) == 0)
		{

			sum = t1 + sum;
		}
		term = t1 + t2;
		t2 = t1;
		t2 = term;
	}
	printf("%ld\n", sum);
	return (0);
}
