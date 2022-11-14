#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - initializing Structure
 * @name: Name
 * @age: Age
 * @owner: Owner
 * @d: new poiner
 * Return: d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->owner = owner;
	d->age = age;

	return (d);
}
