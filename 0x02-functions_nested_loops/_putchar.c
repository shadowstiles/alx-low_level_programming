#include "main.h"
#include <unistd.h>
/**
 * _putchar - funtion to pribt to stdout
 * @c - inputed value
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
