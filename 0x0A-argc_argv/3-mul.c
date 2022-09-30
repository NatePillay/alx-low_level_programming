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
	int i, num1, num2, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}
	num1 = atoi(argv[1]);
	num2 = atoi(argc[2]);

	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
