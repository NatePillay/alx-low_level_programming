#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - function to take two strings and make 1
 * @s1: var 1
 * @s2: var 2
 * Return: if success result in string otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *p, *q, *both;

	both = q = malloc(strlen(s1) + strlen(s2) + 1);



	for (p = s1; (*p = *q) != '\0'; ++p, ++q)
	{

	}
	for (p = s2; (*p = *q) != '\0'; ++p, ++q)
	{

	}
	return (both);
}


