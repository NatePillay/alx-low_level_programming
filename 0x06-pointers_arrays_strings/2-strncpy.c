#include "main.h"

/**
 * _strncpy - function to copy contents
 * @dest: destination variable
 * @src: source variable
 * @n: counter
 * Return: merged string if success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
