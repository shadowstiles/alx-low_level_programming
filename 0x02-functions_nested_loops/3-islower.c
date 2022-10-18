#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry
 * @c - Imput
 * Return: value
 */
int _islower(int c)
{
	int value;

	if (islower(c))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
