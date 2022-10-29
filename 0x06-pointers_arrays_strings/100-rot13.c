#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @c: string encode
 * Return: result
 */

char *rot13(char *c)
{
	char lower[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int i1 = 0;
	int i2;

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if (c[i1] == lower[i2] && i2 < 26)
			{
				c[i1] = lower[i2 + 26];
				break;
			}
			else
			{
				c[i1] = lower[26 - i2];
				break;
			}
		}
		i1++;
	}

	return (c);
}
