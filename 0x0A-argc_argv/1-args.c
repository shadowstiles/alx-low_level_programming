#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int ans = 0;

	for (i = 0; i < argc; i++)
	{
		ans = ans + 1;
	}

	printf("%d", ans);

	printf("\n");

	return (0);
}
