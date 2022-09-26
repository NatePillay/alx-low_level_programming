#include "main.h"

/**
 * _strspn - this will return the number of bytes
 * @s: string array
 * @accept: characters matched
 * Return: the count of this
 */

unsigned int _strspn(char *s, char *accept)
{
       	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int count = 0;
	unsigned int i, j;

       	while (*s != '\0')
    	{
		len1++;
	}

	while (*accept != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len1; i++)
    	{
		for (j = 0; j <= len2; j++)
		{
			s[i] = accept[i];
			count++;
		}
	}
    return (count);
}
