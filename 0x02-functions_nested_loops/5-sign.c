#include "main.h"
/**
 * print_sign - prints sign of a value
 * @n: input value
 * Return: value
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
		value = 1;
	if (n == 0)
		value = 0;
	if (n < 0)
		value = -1;
	return (value);
}
