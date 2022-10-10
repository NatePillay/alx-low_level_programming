#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function to initalise the struct
 * @d: structure
 * @name: var 1
 * @age: var 2
 * @owner: var 3
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
