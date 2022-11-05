#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: substring
 * @accept: byte
 * Return: number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
