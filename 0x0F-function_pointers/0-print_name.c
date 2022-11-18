#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - To print name to screen
 * @name: Firstname to be printed
 * @others: Funtunction name to be printed
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *others))
{
	printf("%c, %c", name, f(others));
}
