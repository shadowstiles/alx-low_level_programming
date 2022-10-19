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
			value = count* multiple;
			printf("%i", value);
			if (count != (times - 1))
			{
				_putchar(',');
				_putchar(' ');
				count++;
			}
		}
		_putchar('\n');
		multiple++;
		value = count = 0;
	}
}
