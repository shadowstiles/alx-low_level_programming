#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string
 * Return: Reversed string
 */

void _print_rev_recursion(char *s)
{
	count = sizeof(s) - 1;

	if (count < 0)
		_putchar('\n');

	_putchar(s[count]);
	count--;

	if (count > 0)
		_print_rev_recursion(s);
}
