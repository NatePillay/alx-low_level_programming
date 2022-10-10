#include "dog.h"
#include <stdlib.h>
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
