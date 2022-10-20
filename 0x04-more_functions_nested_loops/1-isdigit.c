#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digit through 0 - 9
 * @c: inputed value
 * Return: 1 OR 0
 */

int _isdigit(int c)
{
	int value;
	
	if (isdigit(c))
		value = 1;
	else
		value = 0;

	return (value);
}
