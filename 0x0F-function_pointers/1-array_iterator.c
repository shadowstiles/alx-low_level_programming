#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Array iterator
 * @size:nsize of the array
 * @action: function pointer
 * @array: array
 * Return: Null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
