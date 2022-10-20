#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 * Return: NULL
 */

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; i < 15; i++)
		{
			_putchar(a + '0');

			if (a == 14)
				_putchar('\n');
		}
	}
}
