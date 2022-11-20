#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string
 * Return: Reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

<<<<<<< HEAD
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
=======
	_print_rev_recursion(s + 1);
	_putchar(*s);
>>>>>>> 36f39b14390d92bcfa1db86730c89b226b96960a
}
