#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	long int a = 1;
	long int  b = 2;
	long int even = 2;
	long int c;

	while (b < 4000000)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%ld", b);
		if ((b % 2) == 0)
		{
			even = even + b;
		}
	}
	printf("%ld", even);
	putchar('\n');
	return (0);
}
