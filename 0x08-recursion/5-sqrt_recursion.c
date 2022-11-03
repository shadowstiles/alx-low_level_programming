#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - To find the square of a number
 * @n: The number
 * Return: 0 || -1
 */

int _sqrt_recursion(int n)
{
	int c, ans;

	c = count();
	ans = c * c;

	if (ans != n && n == c)
		return (-1);

	if (ans == n)
		return (ans);

	return (_sqrt_recursion(n));
}

int count(void)
{
	int i = 1;

	return (i + 1);
}
