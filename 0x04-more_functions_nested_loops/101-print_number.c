#include "main.h"
#include <stdio.h>

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: number
 */

void print_number(int n)
{
	char str[100];
	int count = 0;

	sprintf(str, "%d", n);

	while (count <= 0 || count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[count]);
			count++;
		}
	}
}
