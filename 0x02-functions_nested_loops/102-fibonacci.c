#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - we looking to print fibonacci
 *
 * Return: return values are the first 50 fibs
 */
int main(void)
{
	long int i, n;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;

	n = 50;


	for (i = 0; i < n; ++i)
	{
		if (i != 49)
		{
			printf("%ld, ", t1);
		}
		else
			printf("%ld ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
