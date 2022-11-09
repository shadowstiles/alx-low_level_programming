#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a two dimensional array
 * @width: This is the row
 * @height: This is the column
 * Return: Pointer or Null
 */

int **alloc_grid(int width, int height)
{
	int *ptr;
	int **ar;
	int i, j, order;

	ar = &ptr;

	ptr = malloc((width * height + 32) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			order = i * height + j;
			ptr[order] = 0;
		}
	}

	free(ptr);
	return (ar);
}
