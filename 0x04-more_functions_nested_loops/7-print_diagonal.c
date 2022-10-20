#include "main.h"

/**
 * print_diagonal - print straight lines
 * @n: given number
 * Return: line
 */

void print_diagonal(int n)
{
	int count = 1;
	int space = 1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count <= n)
	{
		while (space < count)
		{
			_putchar(' ');
			space++;
		}

		space = 1,
		_putchar('\\');
		_putchar('\n');

		count++;
	}
}
