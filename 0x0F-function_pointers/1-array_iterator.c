#include "function_pointers.h"

/**
 * array_iterator - function that will execute on each ele
 * @array: defining the array
 * @size: name of size function
 * @action: each step o iterable
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL && action == NULL)
	{
		return;
	}

	while (size--)
	{
		action(*array);
	}
}
