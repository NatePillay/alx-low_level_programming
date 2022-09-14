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
	int t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;

	n = 50;


	for (i = 3; i <= n; i++)
	{
		putchar(nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
