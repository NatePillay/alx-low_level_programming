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
	if (dest == NULL)
	{
		return (NULL);
	}

	int i = 0;
	int len = 0;

	while (dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
