#include "main.h"

/**
 * _isdigit - Checks for digit through 0 - 9
 * @c: inputed value
 * Return: 1 OR 0
 */

int _isdigit(int c)
{
	int value;

	for (int i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			value = 1;
			break;
		}

		if (i == 9)
			value = 0;
	}

	return (value);
}
