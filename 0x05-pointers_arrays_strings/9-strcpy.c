#include "main.h"

/**
 * *_strcpy - function to copy
 * @dest: var 1
 * @src: var 2
 * Return: copied
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
