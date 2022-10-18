#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

print_alphabet_x10(void)
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
				putchar('\n');
				break;
			}
			putchar(alphabet_lower[count]);
			count++;
		}
		limit++;
	}
}

