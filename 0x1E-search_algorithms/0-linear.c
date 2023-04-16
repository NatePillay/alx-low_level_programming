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
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
