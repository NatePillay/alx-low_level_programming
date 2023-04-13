#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - searching algo
 * @array: pointer to variable in array
 * @size: size pf array
 * @value: the value we searching for
 * Return: index of -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (*(array + i) == value)
		{
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}

	}
	return (-1);
}
