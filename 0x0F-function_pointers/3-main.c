#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that performs operation
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, int *argv[])
{

	int a = 0, b = 0, set = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (argv[2][1] != '\0');
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];

	while (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	set = (get_op_func(argv[2]))(a, b);
	printf("%d\n", set);
	return (0);
}
