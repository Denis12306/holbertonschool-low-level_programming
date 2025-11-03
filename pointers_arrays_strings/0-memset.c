#include "main.h"
#include <stdio.h>
/**
 * _memset a function that fills memory with a constant byte.
 * @b is the constant byte
 * @n is the first byte
 * @i is an integer input
 * Return: @s (the memory area)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
