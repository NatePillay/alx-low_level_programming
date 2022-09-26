#include "main.h"

/**
 * _strstr - function finds first occurence of ss in s
 * @haystack: location pointer
 * @needle: inital pointer
 * Return: values that are caught by the conditions
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	while (*haystack != '\0')
	{
		len1++;
	}

	while (*needle != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}

			if (needle[j])
			{
				i++;
				j = 0;
			}
			else
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}

