#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int  b = 2;
	int count = 2;
	unsigned long int c;

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
