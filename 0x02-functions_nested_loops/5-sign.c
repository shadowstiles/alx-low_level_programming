#include "main.h"
#include <stdlib.h>
/**
 * print_sign - prints sign of a value
 * @n: input value
 * Return: value
 */		
int print_sign(int n)
{
	int value;

	if (n > 0)
		value = atoi("+1");
	if (n == 0)
		value = atoi("0");
	if (n < 0)
		value = atoi("-1");
	return (value);
}
