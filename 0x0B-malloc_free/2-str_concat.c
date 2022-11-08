#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins two strings together in a new memory
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int j;
	int size1 = sizeof(s1);
	int size2 = sizeof(s2);
	int size = sizeof(s1) + sizeof(s2);

	ar = malloc((size - 4) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < size1; i++, j++)
	{
		if (s1 == NULL)
		{
			ar[i] = '\0';
			break;
		}
		else
			ar[i] = s1[j];
	}

	for (j = 0; j < size2; i++, j++)
	{
		if (s2 == NULL)
		{
			ar[i] = '\0';
			break;
		}
		else
			ar[i] = s2[j];
	}

	ar[i] = '\0';

	return (ar);
}
