#include "main.h"
/**
 * print_alphabet - Aphabet printing
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (count < 28)
	{
		if (alphabet_lower[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(alphabet_lower[count]);
		count++;
	}
}
