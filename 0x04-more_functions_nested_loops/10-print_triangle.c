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

		space = size,
		_putchar('#');
		_putchar('\n');

		count++;
	}
}
