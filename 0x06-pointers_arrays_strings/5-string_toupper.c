#include "main.h"

/**
 * string_toupper - covert string s to uppercase
 * @c: string to convert
 * Return: result
 */

char *string_toupper(char *c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i1 = 0;
	int i2;

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if (c[i1] == lower[i2])
			{
				c[i1] = upper[i2];
				break;
			}
		}

		i1++;
	}

	return (c);
}
