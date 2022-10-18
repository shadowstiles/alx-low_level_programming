#include "main.h"
/**
 * print_alphabet_x10 - to print alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;
	int limit = 0;
	
	while (limit < 10)
	{
		while (count < 28)
		{
			if (alphabet_lower[count] == '\0')
			{
				_putchar('\n');							                    break;
			}
			_putchar(alphabet_lower[count]);
			count++;
		}
		limit++;
		count = 0;
	}
}
