#include "main.h"
#include <stdio.h>
/**
 * rev_string - is a function to reverse a string
 * @i is the integer
 * @s in input string.
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
