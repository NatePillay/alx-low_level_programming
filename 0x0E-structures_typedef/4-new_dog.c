#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - type def function to store new data
 * @name: var 1
 * @age: var 2
 * #owner: var 3
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (!dog_t)
	{
		return (NULL);
	}

	char *s;
	char *y;

	s = malloc
