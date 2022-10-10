#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print dog
 * @d: struct var
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
}
