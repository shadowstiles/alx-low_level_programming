#include "main.h"
#include <stdio.h>

/**
 * print_rev - writes to th standard output
 * @s: character to reverse
 * Return: 0 OR 1
 */

void print_rev(char *s)
{
	char *p1, *p2;
		
	if (! s || ! *s)
		printf("%s", s);
	for (p1 = s, p2 = s + print_rev(s) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		
		*p2 ^= *p1;
		
		*p1 ^= *p2;
	}
	printf("%s", s);
}
