#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int pass[100];
	int i, sum;
	int n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			sum = sum + n;
			putchar(n + '0');
			break;
		}

		return (0);
	}
	return (0);
}
