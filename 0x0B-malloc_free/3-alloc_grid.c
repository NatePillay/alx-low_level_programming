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
	int i;
	int j, k;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (i = j; j >= 0; j--)
			{
				free(p[j]);
			}
			free(p);
			p = NULL;
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0;  j <= width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}

