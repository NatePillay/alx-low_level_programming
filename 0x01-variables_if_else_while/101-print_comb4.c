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

	for (i = 47; i <= 58; i++)
	{
		for (j = 48; j <= 58; j++)
		{
			for (k = 49; k <= 58; k++)
			{
			if (i < j && i < k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 56 || j != 57 || k != 58)
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

