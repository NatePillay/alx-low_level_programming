#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - we looking to print fibonacci
 *
 * Return: return values are the first 50 fibs
 */
int main(void)
{
	int i, n;
	int t1 = 1, t2 = 2;
	int nextTerm = t1 + t2;

	n = 50;


	for (i = 1; i <= n; i++)
	{
		printf("%d, ", nextTerm);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
