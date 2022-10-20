#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int value = 0;
	int val3 = 3;
	int val5 = 5;

	while (val3 < 1024 || val5 < 1024)
	{
		if ((val3 % 5) == 0)
		{
			value = value + val3;
			val3 = val3 + 3;
		}
		else if ((val5 % 3) == 0)
			val5 = val5 + 5;
		else
		{
			if (val3 < 1024 && (val3 % 5) != 0)
			{
				value = value + val3;
				val3 = val3 + 3;
			}
			if (val5 < 1024 && (val5 % 3) != 0)
			{
				value = value + val5;
				val5 = val5 + 5;
			}
		}
	}
	printf("%i\n", value);

	return (0);
}
