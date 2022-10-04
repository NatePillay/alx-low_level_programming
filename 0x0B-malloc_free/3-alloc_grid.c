#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - function to create grid
 * @width: first var
 * @height: second var
 * Return: the grid is displayed
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int area = 0;
	int *p = 0;

	area = width * height;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	p = (int *)malloc(area * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0;  j <= height; j++)
		{
			_putchar('0');
		}
		_putchar('\n');
	}

	return (0);
}
