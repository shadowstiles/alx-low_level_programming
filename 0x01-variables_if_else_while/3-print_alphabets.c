#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";
	char capitalLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count = 0;
	int current = 0;

	while (count < 28)
	{
		if (current)
			count = 0;

		if (smallLetters[count] == '\0')
			current = 0;

		if (current)
		{
			if (capitalLetters[count] == '\0')
			{
				putchar('\n');
				break;
			}
			else
			{
				putchar(capitalLetters[count]);
				count++;
			}
		}
		else
		{
			putchar(smallLetters[count]);
			count++;
		}
	}
	return (0);
}
