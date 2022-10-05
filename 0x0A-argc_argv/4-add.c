#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to sum and print num
 * @argc: count of arguments
 * @argv: array of pointers to char
 * Return: sum of ints
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	i = 1;

	while (i != '\0')
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] < '0'  || argv[i] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		i++;
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}

	return (0);
	printf("\n");
}
