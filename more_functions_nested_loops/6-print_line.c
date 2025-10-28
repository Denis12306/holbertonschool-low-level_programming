#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line using `_`.
 * @n: Number of times to print `_` (0 or less prints a newline).
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
