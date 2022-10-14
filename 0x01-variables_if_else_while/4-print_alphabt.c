#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char apht[] = "abcdfghijklmnoprstuvwxyz";
	int count = 0;

	while (count < 27)
	{
		if (apht[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(apht[count]);
			count++;
		}
	}
	return (0);
}
