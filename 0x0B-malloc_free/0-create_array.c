#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character to initialize
 * Return: Pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}