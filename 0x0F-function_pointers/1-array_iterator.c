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
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
		_putchar('\n');
	}
}
