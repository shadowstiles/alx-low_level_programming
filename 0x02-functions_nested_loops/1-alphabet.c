#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * _putchar - putchar Function
 * print_alphabet - aphabet printing
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

int _putchar(int c)
{
	putchar(c);
}

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
