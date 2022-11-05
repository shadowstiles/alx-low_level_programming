#include "main.h"
#include <string.h>

/**
 * _memset - It fill memory with a constant type
 * @s: ponter s
 * @b: constant byte
 * @n: number of time to repeat
 * Return: Anything
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
