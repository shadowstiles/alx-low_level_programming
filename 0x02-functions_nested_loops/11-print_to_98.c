#include "main.h"
/**
 * print_to_98 - print from any number to 98
 * @n: the number to start from
 * Return: printed numbers
 */
void print_to_98(int n)
{
	while (n > 99 || n < 99)
	{
		_putchar(n + '0');
		if (n > 98)
		{
			_putchar(',');
			_putchar(' ');
			n--;
		}

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
