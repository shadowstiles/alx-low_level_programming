#include "main.h"

/**
 * factorial - Factorial of a given number
 * @n: The Number
 * Return: 1 || 0 || -1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
