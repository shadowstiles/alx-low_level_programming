#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

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
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
