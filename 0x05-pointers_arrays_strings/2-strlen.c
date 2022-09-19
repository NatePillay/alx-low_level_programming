#include "main.h"

/**
 * _strlen - function to find string length
 * @s: 1st variable
 * Return: 0 if success
 */
int _strlen(char *s)
{

	unsigned int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
}
