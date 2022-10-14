#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (count < 28)
	{
		if (alpha[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(alpha[count]);
			count++;
		}
	}
	return (0);
}
