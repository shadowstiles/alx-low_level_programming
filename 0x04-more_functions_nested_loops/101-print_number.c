#include "main.h"
#include <stdio.h>

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: number
 */

void print_number(int n)
{
	char str[];
	int count = 0;

	sprintf(str, "%d", n);

	while (count <= 0 || count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[count]);
			count++;
		}
	}
}
