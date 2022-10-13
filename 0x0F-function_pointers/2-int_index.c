#include "function_pointers.h"

/**
 * int_index - function to return occurences
 * @array: the array
 * @size: size of grid
 * @cmp:pointer to function
 * Return: returns integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}


	if (array != NULL || cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
}
