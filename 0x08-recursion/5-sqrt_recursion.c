#include "main.h"

/**
 * _sqrt_recursion - To find the square of a number
 * @n: The number
 * Return: 0 || -1
 */

int _sqrt_recursion(int n)
{
	int value;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	value = count * count;

	if (value == n)
		return (count);

	count++;

	return (_sqrt_recursion(n));
}
