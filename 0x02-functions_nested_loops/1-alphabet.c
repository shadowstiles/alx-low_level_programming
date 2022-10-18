#include <stdio.h>
/**
 * main - Entry Point
 * print_alphabet - Aphabet printing
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (count < 28)
	{
		if (alphabet_lower[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(alphabet_lower[count]);
		count++;
	}
}
