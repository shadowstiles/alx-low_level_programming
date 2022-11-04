#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

void numargc(int argc)
{
	int i;
	int ans;

	for (i = 0; i < argc; i++)
	{
		ans = i;
	}

	printf("%d\n", ans);
}

int main(void)
{
	numargc(1);

	return (0);
}
