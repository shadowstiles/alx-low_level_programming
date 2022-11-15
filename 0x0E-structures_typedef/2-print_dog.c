#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints Dog details
 * @d: d
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (dog.name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	if (dog.age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);

	if (dog.owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
