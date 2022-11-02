#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string
 * Return: Reversed string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
