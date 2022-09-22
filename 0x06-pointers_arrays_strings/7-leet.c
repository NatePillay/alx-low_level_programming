#include "main.h"
/**
 * leet - function to replace characters with numbers
 * @s1: variable name
 * Return: a value that is a leet code
 */

char *leet(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if ((s1[i] == 'a') || (s1[i] == 'A'))
		{
			s1[i] = '4';
		}
		else if
			((s1[i] == 'e') || (s1[i] == 'E'))
		{
			s1[i] = '3';
		}
		else if
			((s1[i] == 'o') || (s1[i] == 'O'))
		{
			s1[i] = '0';
		}
		else if
			((s1[i] == 't') || (s1[i] == 'T'))
		{
			s1[i] = '7';
		}
		else if
			((s1[i] == 'l') || (s1[i] == 'L'))
		{
			s1[i] = '1';
		}
	}

	return (s1);
}
