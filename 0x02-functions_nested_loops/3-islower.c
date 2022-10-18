#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Returns: 0 || 1
 */
int _islower(int c)
{
	char lower[] = "abcdefghijklmonpqrstuvwxyz";
	int count = 0;
	int value;

	while (count < 30)
	{
		if (lower[count] == c)
		{
			value = 1;
		}
		else
		{
			value = 0;
		}
		count++;
	}
	return (value);
}
