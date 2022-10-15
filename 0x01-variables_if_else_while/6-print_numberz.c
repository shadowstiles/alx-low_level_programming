#include <stdio.h>
/**
 * main - Entry
 * Return:0
 */
int main(void)
{
	int count = 0;

	while (count < 11)
	{
		if (count == 10)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(count + '0');
			count++;
		}
	}
	return (0);
}
