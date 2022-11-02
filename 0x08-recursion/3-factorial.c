#include "main.h"

/**
 * factorial - Factorial of a given number
 * @n: The Number
 * Return: 1 || 0 || -1
 */

int factorial(int n)
{
	int result;
	int ans;
	int i;

	if (n == 0)
		result = 1;

	if (n > 0)
		result = -1;
	else
	{
		for (i = n; i < 0; i--)
		{
			ans *= n;
		}

		result = ans;
	}

	return (result);
}
