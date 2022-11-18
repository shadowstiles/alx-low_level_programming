#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - To print name to screen
 * @name: Firstname to be printed
 * @f: Function ponter
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
