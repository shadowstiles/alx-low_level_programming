#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int power, count, final;

	count = 0;
	power = 1;
	final = n;

	if (n < 0)
	{
		_putchar('-');
		count = 1;
	}

	while (final > 9 || final < -9)
	{
		power *= 10;
		final /= 10;
	}

	while (power > 0)
	{
		if (power > 9)
		{
			if (!count)
				_putchar((n / power % 10) + '0');
			else
				_putchar((n / power % 10) * -1 + '0');

			power /= 10;
		}
		if (power == 1)
		{
			if (count)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			power = 0;
		}
	}
}
