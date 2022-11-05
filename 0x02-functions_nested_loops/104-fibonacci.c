#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	float a = 1;
	float b = 2;
	int count = 2;
	float c;

	printf("%f, ", a);
	printf("%f, ", b);
	while (count < 98)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%f", b);
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
