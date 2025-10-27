#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Print numbers except 2 and 4
 * Description - Write a function that prints the numbers, from 0 to 9.
 * @n is the number to print followed by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')

		_putchar(n++);
	}
	putchar('\n');
}
