#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Find the power of number
 * @x: Base
 * @y: power
 * Return: 1 || 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
