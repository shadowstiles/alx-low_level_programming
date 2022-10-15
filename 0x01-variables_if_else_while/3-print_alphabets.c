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
		if (current == 1)
			count = 0;

		if (smallLetters[count] == '\0')
			current = 1;

		if (current == 1)
		{
			if (capitalLetters[count] == '\0')
			{
				putchar('\n');
				break;
			}
			putchar(capitalLetters[count]);
			count++;
		}
		else
		{
			putchar(smallLetters[count]);
			count++;
		}
	}
	return (0);
}
