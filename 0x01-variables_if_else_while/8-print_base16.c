#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char hexaNum[] = "0123456789abcdef";
	int count = 1;

	while (count < 18)
	{
		if (hexaNum[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(hexaNum[count]);
		count++;
	}
	return (0);
}
