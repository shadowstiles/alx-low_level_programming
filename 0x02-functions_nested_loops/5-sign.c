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
	char *s;

	if (n > 0)
	{
		s = "+1";
		value = atoi(s);
	}
	if (n == 0)
	{
		s = "0";
		value = atoi(s);
	}
	if (n < 0)
	{
		s = "-1";
		value = atoi(s);
	}
	return (value);
}
