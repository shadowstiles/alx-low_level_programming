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
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		
		return (1);
	}

	ans = argv[1] * argv[2];

	printf("%d\n", ans);

	return (0);
}
