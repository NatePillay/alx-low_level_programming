#include <stdio.h>

/**
 * main - function to print all arguments
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: print all arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
