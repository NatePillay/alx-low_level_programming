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
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (*src + j)
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}

	}
	return (dest);
}
