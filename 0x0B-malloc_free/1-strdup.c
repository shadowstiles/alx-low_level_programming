#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - new alocated spcae in memory
 * @str: syrong
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	return (strdup(str));
}
