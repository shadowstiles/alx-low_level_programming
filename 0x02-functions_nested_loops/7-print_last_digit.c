#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @v: number whose last number is to be printed
 * Return: last number
 */
int print_last_digit(int v)
{
	int ld = n % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar(ld + '0');
	return (0);
}
