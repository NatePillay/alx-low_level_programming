#include "main.h"

/**
 * _strcmp - function to compare 1 and 2
 * @s1: pointter
 * @s2: pointer 2
 * Return: new return
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return (0);
	}
}
