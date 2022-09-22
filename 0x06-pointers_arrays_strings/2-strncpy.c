#include "main.h"

/**
 *_strncpy - this is a copy function we create
 * @dest: destination var
 * @src: source var
 * @n: counting var
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0'';
		i++;
	}

	return (dest);
}
