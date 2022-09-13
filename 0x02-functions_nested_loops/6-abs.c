#include "main.h"
#include <stdio.h>
/**
 * Description: _abs - function will be used to get absolute value
 * @c: this is the data type of the answer we want returns
 * Returns: 0, _abs will return an absolute int
 */
int _abs(int c)
{

	if (c >= 0 || c == 0)
	{
		return (c);
	} else
		return (c * -1);
}
