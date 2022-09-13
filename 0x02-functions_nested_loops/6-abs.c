#include "main.h"
#include <stdio.h>
/**
 * Description: _abs - function will be used to get absolute value
 * @n: this is the data type of the answer we want returns
 * Returns: 0, _abs will return an absolute int
 */
int _abs(int n)
{
	int n;

	if (n >= 0 || n == 0)
	{
		return (n);
	} else
		return (n * -1);
}
