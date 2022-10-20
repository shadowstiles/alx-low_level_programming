#include "main.h"

/**
 * print_line - print straight lines
 * @n: given number
 * Return: line
 */

void print_line(int n)
{
	int count = 1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count <= n)
	{
		_putchar('_');

		if (count == n)
			_putchar('\n');
		
		count++;
	}
}
