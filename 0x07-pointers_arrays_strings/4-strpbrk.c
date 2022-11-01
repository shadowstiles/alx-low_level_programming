#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string
 * @accept: byte in accept
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
