#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int  b = 2;
	int count = 2;5
	unsigned long long int c;

	printf("%llu, ", a);
	printf("%llu, ", b);
	while (count < 98)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%llu", b);
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
