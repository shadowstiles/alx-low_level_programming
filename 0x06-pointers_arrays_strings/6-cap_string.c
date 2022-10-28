#include "main.h"

/**
 * cap_string - capitalize string
 * @c: string to convert
 * Return: result
 */

char *cap_string(char *c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i1 = 0;
	int i2;

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if (c[0] == lower[i2] || c[0] == upper[i2])
			{
				c[0] = upper[i2];
				break;
			}
		}

		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if ((c[i1] == lower[i2] || c[i1] == upper[i2]) && (c[i1 - 1] == ' '))
			{
				c[i1] = upper[i2];
				break;
			}
		}

		i1++;
	}

	return (c);
}
