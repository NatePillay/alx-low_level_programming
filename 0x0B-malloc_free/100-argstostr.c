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
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	str = malloc(sizeof(char) * len + 1);


	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		_putchar('\n');
	}
	str = '\0';

	free(str);
	return (str);

}

