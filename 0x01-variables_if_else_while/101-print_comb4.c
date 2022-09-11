#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - same method as before but now its 3 number combo
 *
 * Return: 0 and 3 number combo
 */
int main(void)
{
	int i, j, k;

	for (i = 46; i <= 55; i++)
	{
		for (j = 47; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
			if (i < j && i < k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

