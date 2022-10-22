#include <stdio.h>

/**
 * main - print highest prime factor
 * Return: highest prine factor
 */

int main(void)
{
	long int num = 612852475143;
	long int prime = num / 2;
	long int i = 2;
	long int test = 2;
	long largest_prime;
	
	while (i <= num / 2)
	{			        
		while (test <= 9)
		{
			if (prime % test == 0 && prime != test)
			{
				break;
			{
			else
			{
				test++;
			}
		}			        

			if (test == 10)
			{
				if (num % prime == 0)
				{
					break;
				}
			}
			
			test = 2;
			prime--;
			i++;
			}
			
			printf("%ld", prime);
			return 0;
		}
	}
}
