#include "main.h"
/**
 * _strncat - function to return a concatnate
 * @dest: destination var
 * @src: source var
 * @n: number
 * Return: 1 if true
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
		dest++;
	}

	for (j = 0; src[i] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = src[j];

	return (dest);
}
