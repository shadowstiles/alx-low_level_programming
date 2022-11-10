#include "main.h"

/**
 * is_prime_number - Cheaks if a number is a prime number
 * @n: The inputted number
 * Return: 0 || 1
 */

int is_prime_number(int n)
{
	int ans;

	ans = n % count;

	if ((ans == 0 && count != n) || n == 1)
		return (0);

	if (n > 10 && ans > 0)
		return (1);

	count++;

	return (is_prime_number(n));
}
