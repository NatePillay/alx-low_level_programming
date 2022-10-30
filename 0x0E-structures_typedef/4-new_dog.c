#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function to find string length
 * @s: 1st variable
 * Return: 0 if success
 */
int _strlen(char *s)
{

	unsigned int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}


/**
 * *_strcpy - function to copy
 * @dest: var 1
 * @src: var 2
 * Return: copied
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - type def function to store new data
 * @name: var 1
 * @age: var 2
 * @owner: var 3
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Newdog;

	if (Newdog == NULL)
	{
		return (NULL);
	}

	char *xname;
	char *yown;

	xname = (char *)malloc(sizeof(char) * strlen(name) - 1);
	yown = (char *)malloc(sizeof(char) * strlen(owner) - 1);

	strcpy(xname, name);
	strcpy(yown, owner);


	return (Newdog);
}
