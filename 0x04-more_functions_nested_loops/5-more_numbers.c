#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 * Return: NULL
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}

		_putchar('\n');
	}
}
