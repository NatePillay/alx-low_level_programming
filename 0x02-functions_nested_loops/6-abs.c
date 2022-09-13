#include "main.h"
#include <stdio.h>
/**
 * _abs - function will be used to get absolute value
 * @c: this is the data type of the answer we want returns
 * Return: _abs will return a value else multiply by -1
 */
int _abs(int c)
{

	if (c >= 0 || c == 0)
	{
		return (c);
	} else
		return (c * -1);
}
