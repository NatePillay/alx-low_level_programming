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
	int high = size - 1;
	int mid;

	for (int i = start; i <= end; i++)
	{
		if (i < end)
		{
			print("%d, ", array[i]);
		}
		else
		{
			print("%d\n", array[i]);
		}
	}

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (value < array[mid])
	{
		end = mid - 1;
	}
	else
	{
		start = mid + 1;
	}
	return (-1);
}
