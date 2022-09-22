#include "main.h"
/**
 * leet - function to replace characters with numbers
 * @s1: variable name
 * Return: a value that is a leet code
 */

char *leet(char *s1)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s1[i] = a[i])
			{
				s1[i] = n[i];
			}
		}
	
	}


	return (s1);
}
