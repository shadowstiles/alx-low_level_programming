#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int firstNumber = 0;
	int count = 1;

	while (firstNumber < 11)
	{
		if (firstNumber >= count)
		{
			count++;
		} else
		{
			if (firstNumber > 9)
			{
				putchar('\n');
				break;
			}
			if (count > 9)
			{
				firstNumber++;
				count = 0;
			} else
			{
				putchar(firstNumber + '0');
				putchar(count + '0');
				if (firstNumber != 8 && count != 9)
				{
					putchar(',');
					putchar(' ');
				}
l				count++;
			}
		}
	}
	return (0);
}