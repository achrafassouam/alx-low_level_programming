#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - new strct of type dog_t
 * @name: struct parameter name
 * @age: struct paremetre age
 * @owner: struct parametre age
 * Return: the new struct created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *newdog;

	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;
	for (olen = 0; owner[olen] != '\0'; olen++)
		;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(nlen * sizeof(newdog->name));

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->age = age;
	newdog->owner = malloc(olen * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
	{
		newdog->owner[i] = owner[i];
	}
	return (newdog);
}
