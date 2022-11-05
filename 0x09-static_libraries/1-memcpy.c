#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: byte from memory area
 * @n: number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
