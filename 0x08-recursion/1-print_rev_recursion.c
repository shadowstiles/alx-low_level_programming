#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string
 * Return: Reversed string
 */

void _print_rev_recursion(char *s)
{
	count = 0;

	if (s[count] != '\0')
	{
		count++;
		_print_rev_recursion(s);
	}


	if (count < 0)
		_putchar('\n');

	if (count > 0)
	{
		_putchar(s[count]);
		count--;
		_print_rev_recursion(s);
	}
}
