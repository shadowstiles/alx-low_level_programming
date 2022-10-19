#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int value;
	int val3 = 3;
	int val5 = 5;

	while (val3 < 1024 || val5 < 1024)
	{
		if (val3 == val5)
			value = value + val3;
		else
		{
			if (val3 < 1024)
				value = value + val3;
			if (val5 < 1024)
				value = value + val5;
		}
		val3 = val3 + 3;
		val5 = val5 + 5;
	}
	printf("%i \n", value);

	return (0);
}
