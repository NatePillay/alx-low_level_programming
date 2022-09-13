#include "main.h"
/**
 *_abs - this function will be used to get absolute value
 *@n: this is the data type of the answer we want returns
 *Returns: _abs number if success 0 if nothing
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		n = (-1) * n;
	}
	_putchar(n);
}
