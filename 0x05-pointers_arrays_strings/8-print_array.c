#include "main.h"
#include <stdio.h>

/** print_array - print the n number of array
 * @n: size of the array
 * @a: array
 * Return: value in array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf(a[i]);

		if (i < n - 2)
		{
			_putchar(',');
			_putchar(' ');
		}

		i++;
	}
}
