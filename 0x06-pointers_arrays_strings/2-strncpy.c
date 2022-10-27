#include "main.h"
#include <string.h>

/**
 * _strncpy - copy one string to another
 * @dest: The fisrt string
 * @src: Second string
 * @n: the number or point to strat fron
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
