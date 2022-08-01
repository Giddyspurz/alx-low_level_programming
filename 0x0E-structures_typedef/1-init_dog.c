#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct with
 * data passed
 * @d: pointer to struct
 * @name: name var
 * @age: age var
 * @owner: owner var
 *
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

