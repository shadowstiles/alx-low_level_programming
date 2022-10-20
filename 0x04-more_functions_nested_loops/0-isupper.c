#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase
 * @c: inputed value
 * Return: 0 OR 1
 */

int _isupper(int c)
{
	int value;

	if (isupper(c))
		value = 1;
	else
		value = 0;

	return (value);
}
