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
	int i;

	while (*dest != '\0')
	{
		count++;
		dest++;
	}

	for (i = 0; i <= count; i++)
	{
		dest[count + i] + src[i];
	}
	dest = '\0';
	return (dest);
}
