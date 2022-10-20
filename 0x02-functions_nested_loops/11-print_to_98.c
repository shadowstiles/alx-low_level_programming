#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from any number to 98
 * @n: the number to start from
 * Return: printed numbers
 */
void print_to_98(int n)
{
	while (n >= 0 || n < 0)
	{
		printf("%i", n);
		if (n == 98)
		{
			putchar('\n');
			break;
		}
		if (n > 98)
		{
			putchar(',');
			putchar(' ');
			n--;
		}

		if (n < 98)
		{
			putchar(',');
			putchar(' ');
			n++;
		}
	}
}
