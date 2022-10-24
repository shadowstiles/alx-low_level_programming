#include "main.h"
#include "string.h"

/**
 * puts_half - print out half of a string
 * @str: string to print its half
 * Return: result
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i = 0

	while (len % 2 == 0 && i < len / 2)
	{
		_putchar(str[i]);
		i++;
	}

	while (len % 2 != 0 && i < (len - 1 / 2))
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
