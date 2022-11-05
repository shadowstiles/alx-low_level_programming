#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
