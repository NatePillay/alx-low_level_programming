#include "main.h"
/**
 * _memcpy - to copy a data from source to dest for number of characters
 * @dest: destination var
 * @src: source var
 * @n: number of bytes to copy
 * Return: the selected source data copied to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
