#include "dog.h"
#include <stdlib.h>

#include "main.h"

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
 * free_dog - free up memory
 * @d: typedef func
 * Return: Nothingi
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
