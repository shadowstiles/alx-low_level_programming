#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int  b = 2;
	int even = 2;
	int c;

	while (b < 4000000)
	{
		c = b;
		b = a + b;
		a = c;

		if ((b % 2) == 0)
		{
			even = even + b;
		}
	}
	printf("%i", even);
	putchar('\n');
	return (0);
}
