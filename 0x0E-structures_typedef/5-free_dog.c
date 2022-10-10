#include "dog.h"

/**
 * free_dog - free up memory
 * @d: typedef func
 * Return: Nothingi
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->owner);
		free(d->name);
		free(d);
}
