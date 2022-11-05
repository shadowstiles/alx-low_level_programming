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
	int ans;
	int num1 = strtol(argv[1], NULL, 10);
	int num2 = strtol(argv[2], NULL, 10);

	if (argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		ans = num1 * num2;
		printf("%d\n", ans);
	}

	return (0);
}
