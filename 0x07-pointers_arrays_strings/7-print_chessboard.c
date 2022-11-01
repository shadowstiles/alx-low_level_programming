#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: The first array size
 * Return: The chessboard
 */

void print_chessboard(char (*a)[8])
{
	int size = sizeof(a);
	int i;
	int b = 0;

	for (i = 0; i < size; i++)
	{
		while (b < 9)
			_putchar(a[i][b]);

		_putchar('\n');
		b++;
	}
}
