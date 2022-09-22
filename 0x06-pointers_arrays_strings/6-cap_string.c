#include "main.h"
/**
 * cap_string - converts the first letter to upper case
 * @s1: string variable
 * Return: caps first letter if successful
 */

char *cap_string(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if ((s1[i - 1] == ' ') && !(s1[i] >= 65 && s1[i] <= 90))
		{
			s1[i] = s1[i] - 32;
		}

		if ((s1[i - 1] == '\n') || (s1[i - 1] == '\t') || (s1[i - 1] == '!') || (s1[i - 1] == '.'))
		{
			s1[i] = s1[i] - 32;
		}
	}
	return (s1);
}
