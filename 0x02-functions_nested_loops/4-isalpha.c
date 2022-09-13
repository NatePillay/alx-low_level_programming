#include "main.h"
/**
 * _isalpha - function to test if its lower, upper letter
 * @c: parameter included and data type too
 * Return: 0 if no success, 1 for success
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
