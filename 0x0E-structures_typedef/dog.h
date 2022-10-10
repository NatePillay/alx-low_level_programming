#ifndef DOG_H
#define DOG_H

/**
 * struct dog - for dogs
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct to store and use info regarding dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

