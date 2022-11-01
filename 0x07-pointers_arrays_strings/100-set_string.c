#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: String to set 
 * @to: result
 * Return: NULL
 */

void set_string(char **s, char *to)
{
	*to = **s;
}
