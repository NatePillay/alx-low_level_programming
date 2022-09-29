#include "main.h"

/**
 * wildcmp - function to compare two strings
 * @s1: first func
 * @s2: second func
 * Return: 1 for true, 0 for false
 */


int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	else if (*s1  == *s2)
	{
		return (1);
	}
	else
	{
		return (1);
	}
}

