#include "main.h"

/**
 * print_rev - writes to th standard output
 * @s: character to reverse
 * Return: 0 OR 1
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
