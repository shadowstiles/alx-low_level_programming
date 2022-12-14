#include "main.h"
#include <stdio.h>
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

	if (n > 15 || n < 0)
		return;

	while (multiple < times)
	{
		while (count < times)
		{
			value = count * multiple;
			if (value <= 9 && count > 0)
				printf("  ");
			if (value >= 10 && value <= 99 && count > 0)
				printf(" ");
			printf("%i", value);
			if (count != (times - 1))
			{
				printf(",");
				putchar(' ');
			}
			count++;
		}
		printf("\n");
		multiple++;
		value = count = 0;
	}
}
