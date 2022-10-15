#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int count = 0;

	while (count < 11)
	{
		if (count == 10)
		{
			printf("\n");
			break;
		}
		printf("%i", count);
		count++;
	}
	return (0);
}
