#include "main.h"

/**
 * print_chessboard - function will print all values of chess board
 * @a: character variable
 * Return: the print of chess board
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			*a[i][j];
		}
		_putchar('\n');
	}
}

