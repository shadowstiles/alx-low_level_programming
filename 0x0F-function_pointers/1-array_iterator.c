#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Array iterator
 * @size:nsize of the array
 * @action: function pointer
 * Return: Null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
		_putchar('\n');
	}
}
