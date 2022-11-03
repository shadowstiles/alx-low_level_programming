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

	if (n == 0)
		result = 1;

	if (n < 0)
		result = -1;
	else
	{
		ans = (n * factorial(n - 1));
		result = ans;
	}

	return (result);
}
