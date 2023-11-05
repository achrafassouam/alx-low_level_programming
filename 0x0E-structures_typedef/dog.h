#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog onwner name
 *
 * Description: Define data about the dog and its type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * Additional fonctions
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
