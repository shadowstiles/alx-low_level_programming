#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 * Return: NULL
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			printf("%i", a);

			if (a == 14)
				_putchar('\n');
		}
	}
}
