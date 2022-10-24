#include "main.h"

/**
 * puts2 - writes to th standard output
 * @str: character to reverse
 * Return: 0 OR 1
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
