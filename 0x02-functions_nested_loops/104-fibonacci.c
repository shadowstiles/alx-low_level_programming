#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	int unsigned long a = 1;
	int unsigned long b = 2;
	int count = 2;
	int unsigned long c;

	printf("%lu, ", a);
	printf("%lu, ", b);
	while (count < 98)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%lu", b);
		if (count < 97)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
