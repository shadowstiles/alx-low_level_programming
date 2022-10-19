#include "main.h"
/**
 * times_table - 9 times table
 * Return : 0
 */
void times_table(void)
{
	int multiple = 0;
	int count = 0;
	int value = 0;

	while (multiple < 10)
	{
		while (count < 10)
		{
			value = value + multiple;
			_putchar(value + '0');
			if (count < 10)
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
		value = 0;
		count = 0;
	}
}
