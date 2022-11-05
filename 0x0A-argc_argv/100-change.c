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
	int i = 0;
	int num = atoi(argv[1]);
	int change[5] = {25, 10, 5, 2, 1};
	int ans = 0;
	int value = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (num <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < 5)
	{
		if (num >= change[i])
		{
			value = value + change[i];
			if (num == value)
			{
				ans++;
				break;
			}
			if (value < num)
				ans++;
			if (value > num)
			{
				num = num - (value - change[i]);
				value = 0;
				i++;
			}
		}
		else
			i++;
	}
	printf("%d\n", ans);
	return (0);
}
