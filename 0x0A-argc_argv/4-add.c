#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to sum and print nums
 * @argc: count of arguments
 * @argv: array of pointers to char
 * Return: sum of ints
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (argv != 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (i >= '0' && i <= '9')
			{
				sum = sum + atoi(argv[i]);
			}
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
