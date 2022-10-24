#include "main.h"

/**
 * rev_string - writes to th standard output
 * @s: character to reverse
 * Return: 0 OR 1
 */

void rev_string(char *s)
{
	char rv = s[0];
	int i = 0;
	int c;

	while (s[i] != '\0')
		i++;

	for (c = 0; c < i; c++)
	{
		c--;
		rv = s[c];
		s[c] = s[i];
		s[i] = rv;
	}
}
