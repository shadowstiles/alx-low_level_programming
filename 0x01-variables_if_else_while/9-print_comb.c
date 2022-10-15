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
		if (count > 9)
		{
			putchar('\n');
			break;
		}
		putchar(count + '0');
		putchar(',');
		putchar(' ');
		count++;
	}
	return (0);
}
