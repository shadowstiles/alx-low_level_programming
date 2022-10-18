#include "main.h"
#include <ctype.h>
/**
 * _isalpha - uppercase, letter etv
 * @c: imput
 * Return: value
 */
int _isalpha(int c)
{
	int value;

	if (isalpha(c))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
