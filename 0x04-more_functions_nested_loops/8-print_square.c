#include "main.h"

/**
 * print_square - print square
 * @size: given length
 * Return: line
 */

void print_square(int size)
{
	int count = 1;
	int hash = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count <= size)
	{
		while (hash <= size)
		{
			_putchar('#');
			hash++;
		}

		hash = 1,
		_putchar('\n');

		count++;
	}
}
