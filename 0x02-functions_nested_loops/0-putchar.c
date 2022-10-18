#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	char putc[] = "_putchar";
	int count = 0;

	while (count < 8)
	{
		if (putc[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(putc[count]);
		count++;
	}
	return (0);
}
