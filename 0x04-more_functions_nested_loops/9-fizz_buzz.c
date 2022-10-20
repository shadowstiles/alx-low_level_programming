#include <stdio.h>

/**
 * main - fizzbuzz
 * Return: result
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBizz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");

			printf(" ");
			if (i == 100)
				printf("\n");
		}
		else
			printf("%i ", i);
	}

	return (0);
}
