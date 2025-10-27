#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Print numbers except 2 and 4
 * Description - Write a function that prints the numbers, from 0 to 9.
 * @i is the number to print followed by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
