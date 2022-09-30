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

	if (argv > 0)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
}
