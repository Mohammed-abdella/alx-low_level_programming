#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function to initialize a struct dog
 * @d: the address to the struct variable to be initialized
 * @name: the name of structure variable
 * @age: the age of structure variable
 * @owner: the owner of structure variable
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
