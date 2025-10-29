#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 on success.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", n);
	}
		if (n < 100)
		{
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
