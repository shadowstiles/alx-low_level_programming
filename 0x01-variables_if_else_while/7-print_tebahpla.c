#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char reverseNum[] = "zyxwvutsrqponmlkjihgfedcba";
	int count = 0;

	while (count < 28)
	{
		if (reverseNum[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(reverseNum[count]);
		count++;
	}
	return (0);
}
