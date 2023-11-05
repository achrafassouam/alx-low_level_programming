#include "dog.h"

/**
 * init_dog - to initialize struct dog
 * @d: name of struct
 * @name: pointer to name of dog in struct
 * @age: age of dog in struct
 * @owner: pointer to owner name in struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
