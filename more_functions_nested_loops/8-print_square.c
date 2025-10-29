#include "main.h"
#include <stdio.h>
/**
 * print_square - Write a function that prints a square.
 * @size: the size of the square to print.
 * Return: void
 */
void print_square(int size)
{
	int n, i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
	for (i = 0; i < size; i++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
