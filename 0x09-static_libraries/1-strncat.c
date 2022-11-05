#include "main.h"
#include <string.h>

/**
 * _strncat - Join two syring from a particular point or number
 * @dest: The fisrt string
 * @src: Second string
 * @n: the number or point to strat fron
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
