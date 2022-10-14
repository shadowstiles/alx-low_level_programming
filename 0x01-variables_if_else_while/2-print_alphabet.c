#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (int count = 0; count < 28; count++)
	{
		if (alpha[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(alpha[count]);
	}
	return (0);
}
