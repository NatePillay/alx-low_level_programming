#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function to concatenate the string of vals
 * @ac: one var
 * @av: vector array of pointers to string
 * Return: successful retur the words with space
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int len = 1;
	char *str;

	if (!ac || av[i] == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	str = '\0';
	str = malloc(sizeof(char) * len);

	for (i = 1; i < ac; i++)
	{
		strcat(str, av[i]);
		_putchar('\n');
	}

	free(str);
	return (str);

}

