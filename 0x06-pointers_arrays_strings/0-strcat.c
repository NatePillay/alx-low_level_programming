#include "main.h"

/**
 * _strcat - function to concatnate two strings
 * @dest: variable dest
 * @src: variable src
 * Return: return 1 string
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i = 0;

	while (*dest != '\0')
	{
		count++;
		dest++;
	}

	while (*(src + count) != '\0')
	{
		*(dest + i) + *(src + count);
		i++;
		count++;

	}
	dest = '\0';
	return (dest);
}
