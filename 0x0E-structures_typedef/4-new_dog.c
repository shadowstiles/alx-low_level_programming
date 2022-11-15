#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Create New dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: dogs
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;

	dogs = malloc(sizeof(dog_t));

	if (dogs == NULL)
		return (NULL);

	dogs->name = name;
	dogs->age = age;
	dogs->owner = owner;

	return (dogs);
}
