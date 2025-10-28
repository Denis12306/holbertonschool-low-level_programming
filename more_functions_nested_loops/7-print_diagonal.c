#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Draw a diagonal line
 * @n : is the number of times the character has to be print followed by \.
 * i and j are two integers
 * Return : void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
