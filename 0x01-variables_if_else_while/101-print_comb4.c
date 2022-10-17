#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 11)
	{
		if (a == 10)
		{
			putchar('\n');
			break;
		}
		if (c > 9)
		{
			b++;
			c = 0;
		}
		if (b > 9)
		{
			a++;
			b = 0;
		}
		if (a >= b || b >= c)
		{
			c++;
		}
		else
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');
			if ((a != 7 && b != 8) && c != 9)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
	}
	return (0);
}
