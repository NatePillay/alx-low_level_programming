#include "search_algos.h"

/**
 * binary_search - function to perform a binary search
 * @array: variable pointer to array
 * @size: size variable
 * @value: the value we looking for
 * Return: index or -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high;
	int mid;
	int i;

	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		
		for (i = low; i <= high; i++)
		{
			i < high ? printf("%d, ", array[i]) : printf("%d\n", array[i]);
		}

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
