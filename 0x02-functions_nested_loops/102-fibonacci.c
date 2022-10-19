#include "main.h"
#include <stdio.h>
/**
 * main - fibanocci number
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int count = 2;
	int c;

	printf("%i, ", a);
	while (count < 51)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%i", b);
		if (count < 50)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
