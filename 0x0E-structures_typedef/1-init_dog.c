#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing Structure
 * struct dog - Structure of dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * @d: new poiner
 * Return: d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
