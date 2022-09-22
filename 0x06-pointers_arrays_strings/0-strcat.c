#include "main.h"

/**
 * _strcat - function to concatnate two strings
 * @dest: variable dest
 * @src: variable src
 * Return: return 1 string
 */

char *_strcat(char *dest, char *src)
{
	char *return_ptr = dest;


	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	dest = '\0';

	return (return_ptr);

}
