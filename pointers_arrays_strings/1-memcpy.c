#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area
 * @src is the start area
 * @dest is the end area
 * @n is the number of bytes
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
