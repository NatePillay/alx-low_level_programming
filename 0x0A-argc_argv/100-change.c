#include <stdio.h>
#include <stdlib.h>

/**
 * main -function to convert cents to rands
 * @argc: number of arguments
 * @argv: number of pointers to char
 * Return: the converted value
 */

int main(int argc, char *argv[])
{
	int i, j, amount;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 4 && j >= 0; i++)
	{
		while (amount > coins[i])
		{
			amount -= coins[i];
			amount++;
		}
	}

	printf("%d\n", amount);
	return (0);
}
