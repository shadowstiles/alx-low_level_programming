#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defining Structure
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Longer Description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
