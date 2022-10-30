#include "dog.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * new_dog - this function is to create a new struct type
 * @name: variable for name
 * @age: variable for age
 * @owner: varaible for owner name
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, c = 0;
	dog_t *Newdog;

	Newdog = malloc(sizeof(dog_t));
	if (Newdog == NULL)
		return (NULL);

	Newdog->age = age;
	for (i = 0, c = 0; name[i] != '\0'; i++)
		c++;
	Newdog->name = malloc(sizeof(char) * (c + 1));
	if (Newdog->name == NULL)
	{
		free(Newdog);
		return (NULL);
	}
	for (i = 0; 1; i++)
	{
		(*(Newdog->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}

	for (i = 0, c = 0; owner[i] != '\0'; i++)
		c++;
	Newdog->owner = malloc(sizeof(char) * (c + 1));
	if (Newdog->owner == NULL)
	{
		free(Newdog);
		return (NULL);
	}
	for (i = 0; 1; i++)
	{
		(*(Newdog->owner + 1)) = owner[i];
		if (owner[i] == '\0')
			break;
	}

	return (Newdog);
}
