#include "main.h"
/**
 * jack_bauer - prints minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d = 0;

	while (a < 3)
	{
		if (d == 10)
		{
			c++;
			d = 0;
		}
		if (c == 6)
		{
			b++;
			c = 0;
		}
		if (b == 4)
		{
			a++;
			b = 0;
		}
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');
		d++;
	}
}
