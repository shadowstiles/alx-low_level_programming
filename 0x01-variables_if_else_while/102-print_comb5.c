#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int firstNumber1, firstNumber2, secondNumber1, count = 0;

	while (firstNumber1 < 11)
	{
		if (firstNumber1 > 9)
		{
			putchar('\n');
			break; }
		if (count > 9)
		{
			firstNumber2++;
			count = 0; }
		if (firstNumber2 > 9)
		{
			secondNumber1++;
			firstNumber2 = 0; }
		if (secondNumber1 > 9)
		{
			firstNumber1++;
			secondNumber1 = 0; }
		if (secondNumber1 >= count || firstNumber1 > firstNumber2)
		{
			count++; }
		else
		{
			putchar(firstNumber1 + '0');
			putchar(secondNumber1 + '0');
			putchar(' ');
			putchar(firstNumber2 + '0');
			putchar(count + '0');
			if (secondNumber1 != 8)
			{
				putchar(',');
				putchar(' '); }
			count++;
		}
	}
	return (0);
}
