#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory occupied
 * by struct dog
 * @d: pointer to struct in memory
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
