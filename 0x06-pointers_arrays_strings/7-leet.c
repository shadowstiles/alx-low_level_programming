#include "main.h"

/**
 * leet - capitalize string
 * @c: string to convert
 * Return: result
 */

char *leet(char *c)
{
	char lower[] = "aAeEoOtTlL";
	char code[] = "4433007711";
	char new[];
	int i1 = 0;
	int i2;

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if (c[i1] == lower[i2])
			{
				c[i1] = code[i2];
				break;
			}
		}
		i1++;
	}

	return (c);
}
