#include <stdio.h>

void _attribute_((constructor)) theHare(void);

/**
 * theHare - prints a meassage before the main function
 * Return: Nothing
 */

theHare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
