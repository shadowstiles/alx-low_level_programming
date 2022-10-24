#include "main.h"

/**
 * saap_int - to swap two integers
 * @a: first integer value
 * @b: second interger value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = &d;
	*b = &c;
}
