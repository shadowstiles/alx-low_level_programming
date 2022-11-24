#include <stdio.h>

void __attribute__((constructor)) theHare(void);

/**
 * theHare - prints a meassage before the main function
 * Return: Nothing
 */

void theHare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
