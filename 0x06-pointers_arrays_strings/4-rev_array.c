#include "main.h"

/**
 * reverse_array - Revesre a string
 * @n: size of string
 * @a: string to reverse
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		_putchar(a[i]);
		i--;
	}
}
