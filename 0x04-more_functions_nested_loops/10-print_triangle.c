#include "main.h"

/**
 * print_triangle - print straight lines
 * @size: given number
 * Return: line
 */

void print_triangle(int size)
{
	int count = 1;
	int space = size;
	int hash = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count <= size)
	{
		while (space > count)
		{
			_putchar(' ');
			space--;
		}

		while (hash < count)
		{
			_putchar('#');
			hash++;
		}

		space = size,
		hash = 1,
		_putchar('\n');

		count++;
	}
}
