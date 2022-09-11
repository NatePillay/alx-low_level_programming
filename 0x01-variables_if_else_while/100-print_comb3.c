#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - we going to attempt to create a combo of digits 0-9
 *
 * Return: 0 and combo of numbers 0 to 9
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && j != i)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
		}
		
	}
}
	putchar('\n');
	return (0);
	}


