#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Returns: 0 || 1
 */
int _islower(int c)
{
	char lower[] = "abcdefghijklmonpqrstuvwxyz";
	int count = 0;

	while (count < 30)
	{
		if (lower[count] == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		count++;
	}
}
