#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Revesre a string
 * @n: size of string
 * @a: string to reverse
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
