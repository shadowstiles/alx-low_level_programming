#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 * @v: number whose last number is to be printed
 * Return: last number
 */
int print_last_digit(int v)
{
	int last;
	
	if (v < 0)
		v = v * -1

	last = v % 10;

	_putchar(last + '0');
	return (last);
}
