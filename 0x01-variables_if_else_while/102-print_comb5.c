#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int a, b, c, d = 0;

	while (a < 11)
	{
		if (a > 9)
		{
			putchar('\n');
			break; }
		if (b > 9)
		{
			a++;
			b = 0; }
		if (c > 9)
		{
			b++;
			c = 0; }
		if (d > 9)
		{
			c++;
			d = 0; }
		if (a > c || b >= d (a == c && b == d))
		{
			d++; } else
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				d++;
				if (b != 8)
				{
					return (0); }
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
