#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: numbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');

		if (i == 9)
			_putchar('\n');
	}
}
