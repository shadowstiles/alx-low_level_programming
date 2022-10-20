#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9 excluding 2 and 4
 * Return: result
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i + '0');

		if (i == 9)
			_putchar('\n');
	}
}
