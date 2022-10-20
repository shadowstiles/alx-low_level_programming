#include "main.h"
#include <stdio.h>
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
			value = count * multiple;
			if (value <= 9 && count > 0)
				putchar(' ');
			printf("%i", value);;
			if (count != 9)
			{
				printf(",");
				putchar(' ');
			}
			count++;
		}
		printf("\n");
		multiple++;
		value = 0;
		count = 0;
	}
}
