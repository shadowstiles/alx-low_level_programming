#include "main.h"

/**
 * swap_int - to swap two integers
 * @a: first integer value
 * @b: second interger value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
