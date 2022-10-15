#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int firstNumber = 0;
	int secondNumber = 0;
	int count = 1;

	while (firstNumber < 11)
	{
		if (firstNumber >= secondNumber || secondNumber >= count)
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
				secondNumber++;
				count = 0;
			}
			if (secondNumber > 9)
			{
				firstNumber++;
				secondNumber = 0;
			} else
			{
				putchar(firstNumber + '0');
				putchar(secondNumber + '0');
				putchar(count + '0');
				putchar(',');
				putchar(' ');
				count++;
			}
		}
		return (0);
	}
}
