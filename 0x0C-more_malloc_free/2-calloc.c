#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null || else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * sizeof(size));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
