#include "main.h"
#include <ctype>
/**
 * _islower - checks for lowercase letters
 * Returns: 0 || 1
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
