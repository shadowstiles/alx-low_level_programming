#include "main.h"
#include <stdio.h>

/**
 * _putchar - Funtion to print to stdout
 * @c : inputed value
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
