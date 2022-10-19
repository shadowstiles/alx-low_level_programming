#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int value;
	int val3 = 0;

	while (val3 < 1024)
	{
		value = value + 15;
		val3++;
	}
	printf("%i \n", value);
}
