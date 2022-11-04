#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int ans;

	if (argc == 0)
		printf("%d\n", 0);

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], NULL, 10);

		if (num == 0)
		{
			printf("Error\n");

			return (1);
		}
		else
			ans = ans + num;
	}

	printf("%d\n", ans);

	return (0);
}
