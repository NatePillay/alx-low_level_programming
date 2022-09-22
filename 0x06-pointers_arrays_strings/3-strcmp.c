#include "main.h"

/**
 * _strcmp - function to compare 1 and 2
 * @s1: pointter
 * @s2: pointer 2
 * Return: new return
 */

int _strcmp(char *s1, char *s2)
{
	int flag;
	int i;

	flag  = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = *(s1 + i);
			break;
		}
	}
	return (flag);
}
