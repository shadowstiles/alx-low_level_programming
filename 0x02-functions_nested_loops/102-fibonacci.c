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
	int count = 2;
	long int c;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (count < 50)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%ld", b);
		if (count < 49)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
