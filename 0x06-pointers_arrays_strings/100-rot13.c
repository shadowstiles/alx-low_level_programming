#include "main.h"

/**
 * rot13 - capitalize string
 * @c: string to convert
 * Return: result
 */

char *rot13(char *c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i1 = 0;
	int i2;

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if ((c[i1] == lower[i2] || c[i1] == upper[i2]) && i2 <= 13)
			{
				c[i1] = code[i2 + 13];
				break;
			}
			else
			{
				c[i1] = code[13 - i2];
				break;
			}
		}
		i1++;
	}

	return (c);
}
