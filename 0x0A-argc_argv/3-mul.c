#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to take in args and sum
 * @argc: count of args
 * @argv: array of pointer to string
 * Return: sum of two ints
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 2)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	printf("Error\n");
	return (1);
}
