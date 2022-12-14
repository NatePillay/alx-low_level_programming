#include "main.h"

/**
 * _atoi - function to convert string to int
 * @s: 1 var
 * Return: 0
 */

int _atoi(char *s)
{
	int res = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return (res);
}
