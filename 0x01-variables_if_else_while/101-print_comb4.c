#include <stdlib.h>
#include <stdio.h>
/**
 * Description: main - same method as before but now its 3 number combo
 *
 * Return: 0 and 3 number combo
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i <= 1000)
	{
		j = (i / 100 + '0');
		k = (i / 10 % 10 + '0');
		l = (i % 10 + '0');
		if ((j < k) && (k < l))
		{
			putchar(l);
			putchar(k);
			putchar(j);
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

