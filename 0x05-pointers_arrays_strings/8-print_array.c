#include "main.h"

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
		_putchar(a[i]);

		if (i < n - 2)
		{
			_putchar(',');
			_putchar(' ');
		}

		i++;
	}
}
