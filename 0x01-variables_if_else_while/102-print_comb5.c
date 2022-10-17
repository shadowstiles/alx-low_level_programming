#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int a, b, c = 0;
	int d = 1;

	while (a < 10)
	{
		if (a == 10)
		{
			putchar('\n');
			break; }
		if (b == 10)
		{
			a++;
			b = 0; }
		if (c == 10)
		{
			b++;
			c = 0; }
		if (d == 10)
		{
			c++;
			d = 0; }
		if (a > c || b >= d || (a == c && b == d))
		{
			d++; } else
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				d++;
				if (a == 9 && b == 8)
				{
					return (0); }
				putchar(',');
				putchar(' ');
			}
			return (0);
	}
}
