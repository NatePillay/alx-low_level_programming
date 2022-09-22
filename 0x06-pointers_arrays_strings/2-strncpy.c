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

	int i = 0;
	char *return_ptr = dest;

	while (*src != '\0' &&  i < n)
	{
		*dest = *src;
		*dest++;
		*src++;
		i++;
	}
	*dest = '\0';

	return (return_ptr);
}




