#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonal of a square matric
 * @a: int pointer
 * @size: size of the matric
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int sumA = 0;
	int sumB = 0;
	int i;
	int b = 1;

	for (i = 0; i < size * size; i++)
	{
		sumA += a[i];
		i += size;
	}

	for (i = size - 1; i < (size * size) - 1 ; i)
	{
		sumB += a[i];
		b++;
		i = (size - 1) * b;
	}

	printf("%d, %d", sumA, sumB);
	putchar('\n');
}
