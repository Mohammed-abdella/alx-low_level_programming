#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function to free memory for a struct dog
 * @d: the address to the struct variable to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
