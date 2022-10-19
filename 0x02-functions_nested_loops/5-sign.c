#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints sign of a value
 * @n: input value
 * Return: value
 */		
int print_sign(int n)
{
	char value;

	if (n > 0)
		value = "+1";
	if (n == 0)
		value = "0";
	if (n < 0)
		value = "-1";
	return (strtoi(value));
}
