#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - writes to th standard output
 * @s: character to reverse
 * Return: 0 OR 1
 */
char *strrev(char *str)
{
	char *p1, *p2;
	
	if (! str || ! *str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}

void print_rev(char *s)
{
	char h = strrev(s);
	printf("%s\n", h);
}
