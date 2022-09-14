#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - we looking to print fibonacci
 *
 * Return: return values are the first 50 fibs
 */
int main(void)
{
	int t1, t2, n, i;
	int nextTerm = t1 + t2;

	n = 50;
	t1 = 0;
	t1 = 1;


	for (i = 3; i <= 50; i++)
	{
		putchar(nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
