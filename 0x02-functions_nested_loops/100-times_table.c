#include "main.h"
/**
 * print_times_table - times table
 * @n: any number
 * Return : 0
 */
void print_times_table(int n)
{
	int multiple = 0;
	int count = 0;
	int value = 0;
	int times = n + 1;

	while (multiple < times)
	{
		while (count < times)
		{
			value = value + multiple;
			_putchar(value + '0');
			if (count > times)
			{
				_putchar(',');
				_putchar(' ');
				count++;
			}
			else
			{
				_putchar('&');
				_putchar('\n');
				break;
			}
		}
		multiple++;
		value = count = 0;
	}
}
