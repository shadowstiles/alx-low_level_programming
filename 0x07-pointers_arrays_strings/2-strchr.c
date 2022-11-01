#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in  the string
 * @s: string to locate chracter from
 * @c: character to locate
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
